
/*

    Problem Name :  Missing number in array.
    Given : An array of size N-1 and given that there are numbers from 1 to N with one element missing.
    To Do : Find the missing number.
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
    int n;
    cin>>n;
    vector<int> v(n-1);
    for(auto &x : v)cin>>x;
    
    int ans = ((n*(n+1))/2)- (accumulate(v.begin(),v.end(),0));
    //cout<<((n*(n+1))/2)<<" "<< (accumulate(v.begin(),v.end(),0))<<"\n";
    cout<<ans<<"\n";
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