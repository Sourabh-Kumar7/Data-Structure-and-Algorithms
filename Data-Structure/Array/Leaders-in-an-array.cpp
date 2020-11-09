/*
    Problem Name : Leaders in an array. 
    Given : An array of positive integers. 
    To Do : Find the leaders in the array.
    Note : An element of array is leader if it is greater than or equal to all the elements to its right side. Also, the rightmost element is always a leader. 
    Time Complexity : O(N)
    Space Complexity : O(N)
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
    vector<int> arr(n);
    for(auto &x : arr)cin>>x;
    vector<int> ans;
    int max_from_right =  arr[n-1];
    ans.push_back(max_from_right);

    for (int i = n-2; i >= 0; i--) 
    { 
        if (max_from_right <= arr[i])  
        {            
            max_from_right = arr[i];
            ans.push_back(max_from_right);
        } 
    }
    int p = ans.size();
    for(int i =p-1;i>=0;i-- )cout<<ans[i]<<" ";
    
    cout<<"\n";
    
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
