
/*
    Problem Name : Ways to color a 3xN Board.
    Given : A 3xN board.
    To Do : Find the number of ways to color it using at most 4 colors such that no 2 adjacent boxes have same color.
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
    int N;
    cin>>N;
    long int color3 = 24; 
    long int color2 = 12; 
    long int temp = 0; 
  
    for (int i = 2; i <= N; i++)  
    { 
        temp = color3; 
        color3 = (11 * color3 + 10 * color2 ) % 1000000007; 
        color2 = ( 5 * temp + 7 * color2 ) % 1000000007; 
    } 
      
    long num = (color3 + color2) % 1000000007; 
                         
    cout<<num<<"\n";
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
