
/*

    Problem Name : Subarray with given sum 
    Given : An unsorted array A of size N of non-negative integers
    To Do : Find a continuous sub-array which adds to a given number S
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

    long target;
    cin>>target;

    vector<long> v(n);

    for(auto &x : v)cin>>x;

    int first = 0;
    int last;

    bool check = false;

    int sum =0;

    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        
        if(sum>target)
        {
            while(sum>target)
            {
                sum-=v[first];
                first++;
            }
        }
        if(sum==target)
        {
            check = true;
            last=i;
            break;
        }
    }

    if(check)cout<<first+1<<" "<<last+1<<"\n";
    else
        cout<<"-1\n";
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
