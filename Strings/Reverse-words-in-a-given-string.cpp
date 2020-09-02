
/*

    Problem Name : Reverse words in a given string
    Given : A string of length N.
    To Do : Reverse the whole string without reversing the individual words in it.
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

    reverse(s.begin(),s.end());
    int firstIndex=0;
    for(int i =0;i<n;i++)
    {
        if(s[i]=='.')
        {
            reverse(s.begin()+firstIndex,s.begin()+i);
            firstIndex=i+1;
        }
    }

    reverse(s.begin()+firstIndex,s.end());

    cout<<s<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w",stdout);
    #endif
    
    int testcases;
    cin>>testcases;

    while(testcases--)
    {
        solve();
    }
    return 0;
}
