
/*

    Problem Name : Anagram
    Given : Two strings of lowercase.
    To Do : Check wether string is anagram or not.
    Time Complexity : O(N) where N = length of bigger string.
    Space Complexity : O(1)

*/

//***CodeBy_Beyourwild7***//

#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vlld vector<lld>
#define pb push_back
#define ff first
#define ss second
#define ln '\n'
#define pii pair<int,int>
#define mii map<int, int>
#define vii vector<pii>
#define forf(var,frm,cntt) for(int var=frm;var<cntt;++var)
#define forr(var,cntt,frm) for(int var=cnt-1;var>=cntt;--var)
#include<string>
using namespace std;


void run_case()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    bool check = true;
    int CountChar[26]={};
    int n = s1.length();
    for(int i=0;i<n;i++)
    {
        CountChar[s1[i]-'a']++;
    }
    n = s2.length();
    for(int i =0;i<n;i++)
    {
        CountChar[s2[i]-'a']--;
    }
    
    for(auto i : CountChar)
    {
        if(i!=0)
        {
            check = false;
            break;
        }
    }
    
    if(check)cout<<"YES\n";
    else cout<<"NO\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int testcases=1;
    cin>>testcases;
    
    while(testcases--)
    {
      run_case();
    }
    return 0;
}
