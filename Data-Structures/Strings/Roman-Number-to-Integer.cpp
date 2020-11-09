
/*
    Problem Name : Roman Number to Integer.
    Given : An string in roman no format (s). 
    To Do : Convert the given string into roman number.
    Time Complexity : O(N)
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

void solve()
{
    string s;
    cin>>s;
    int n = s.length();
    
    unordered_map<char,int> mp;
    mp['I']=1;
    mp['V']=5;
    mp['X']=10;
    mp['L']=50;
    mp['C']=100;
    mp['D']=500;
    mp['M']=1000;
    
    int ans=mp[s[n-1]];
    int temp = mp[s[n-1]];
    for(int i= n-2;i>=0;i--)
    {
        if(mp[s[i]]>=temp)
        {
            ans+=mp[s[i]];
            temp = mp[s[i]];
        }
        else ans-=mp[s[i]];
    }
    
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int testcases;
    cin>>testcases;

    while(testcases--)
    {
        solve();
    }
    return 0;
}   
