
//***Beyourwild7***//

#include <bits/stdc++.h>        
using namespace std;

int LongestCommonSubstring(string str1, string str2)
{
  int str1Length = str1.size();
  int str2Length = str2.size();

  int LCSuff[str1Length+1][str2Length+1];

  int LongestLength=0;

  for(int i = 0; i <= str1Length; i++)
  {
    for(int j =0; j<= str2Length; j++)
    {
      if(i==0 || j==0)LCSuff[i][j]=0;
      else if(str1[i-1]==str2[j-1])
      {
        LCSuff[i][j]=1+LCSuff[i-1][j-1];
        LongestLength = max(LongestLength,LCSuff[i][j]);
      }
      else
      {
        LCSuff[i][j]=0;
      }
    }
  }

  return LongestLength;
}

int main()
{
  string str1,str2;
  cin>>str1>>str2;
  cout<<LongestCommonSubstring(str1,str2);
  
  return 0;
}
