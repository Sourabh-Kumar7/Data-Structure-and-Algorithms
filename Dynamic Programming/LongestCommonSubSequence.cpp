//Given : Two Strings
//To Do : Find the length of Common Subsequence
//For eg. str1 = "Iamaprogrammer"  str2 = "Idoprogramming" , then ans will be Length = 9 and the common substring will be "Iprogramm"

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

  return LongestLength;
}

int main()
{
 
  string a,b;
  cin>>a>>b;

  cout<<LongestCommonSubstring(a,b);
  
  return 0;
}
