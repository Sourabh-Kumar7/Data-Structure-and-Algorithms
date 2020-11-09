//Given : Two Strings str1 and str2.
//To Do : Print the Common Substring.
//Time Complexity : O(N*M) where N = length of 1st string and M = length of 2nd string.

//***CodeBy_Beyourwild7***//

#include <bits/stdc++.h>    
using namespace std;

string LongestCommonSubstring(string str1, string str2)
{
  int str1Length = str1.size();
  int str2Length = str2.size();

  int LCSuff[str1Length+1][str2Length+1];

  int LongestLength=0;
  int row,col;

  for(int i = 0; i <= str1Length; i++)
  {
    for(int j =0; j<= str2Length; j++)
    {
      if(i==0 || j==0)LCSuff[i][j]=0;
      else if(str1[i-1]==str2[j-1])
      {
        LCSuff[i][j]=1+LCSuff[i-1][j-1];
        if(LongestLength<LCSuff[i][j])
        {
          LongestLength = max(LongestLength,LCSuff[i][j]);
          row = i;
          col = j;
        }
      }
      else
      {
        LCSuff[i][j]=0;
      }
    }
  }

  if(LongestLength==0)return "-1";


  string Ansstring = "";


  while(LCSuff[row][col]!=0)
  {
    Ansstring.push_back(str1[row-1]);
    row--;
    col--;
  }

  reverse(Ansstring.begin(),Ansstring.end());

  return Ansstring;

}

int main()
{
  string str1,str2;
  cin>>str1>>str2;
  cout<<LongestCommonSubstring(str1,str2);
}
