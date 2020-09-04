
/*

    Problem Name : Permutations of a given string
    Given : A string of length N.
    To Do : Print all permutations of a given string.
    Time Complexity : O(N!)
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

    sort(s.begin(),s.end());

    do
    {
        cout<<s<<" ";
    }while(next_permutation(s.begin(),s.end()));
    cout<<"\n";
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