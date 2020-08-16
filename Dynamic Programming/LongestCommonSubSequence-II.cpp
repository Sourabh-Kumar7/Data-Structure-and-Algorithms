//Given : Two Strings
//To Do : Print the Common Subsequence.
//For eg. str1 = "Iamaprogrammer"  str2 = "Idoprogramming" , then ans will be "Iprogramm"

//Time Complexity : O(N*M) where N = length of 1st string and M = length of 2nd string.

//***CodeBy_Beyourwild7***//

#include <bits/stdc++.h>     
using namespace std;

int LongestCommonSubstring(string str1, string str2)
{
  int str1Length = str1.size();
  int str2Length = str2.size();

  int LCS[str1Length+1][str2Length+1];

  int LongestLength;

  for(int i = 0; i <= str1Length; i++)
  {
    for(int j =0; j<= str2Length; j++)
    {
      if(i==0 || j==0)LCS[i][j]=0;
      else if(str1[i-1]==str2[j-1])
      {
        LCS[i][j]=1+LCS[i-1][j-1];
      }
      else
      {
        LCS[i][j]=max(LCS[i][j-1],LCS[i-1][j]);
      }
    }
  }

  LongestLength = LCS[str1Length][str2Length];
  
  string AnsString="";

  int i = str1Length, j = str2Length; 
   while (i > 0 && j > 0) 
   { 
      if (str1[i-1] == str2[j-1]) 
      { 
          AnsString.push_back(str1[i-1]);
          i--; j--;
      } 
      else if (LCS[i-1][j] > LCS[i][j-1]) 
         i--; 
      else
         j--; 
   } 
  
  reverse(AnsString.begin(),AnsString.end());

  return AnsString;
  
}

int main()
{
 
  string str1,str2;
  cin>>str1>>str2;

  cout<<LongestCommonSubstring(str1,str2);
  
  return 0;
}
