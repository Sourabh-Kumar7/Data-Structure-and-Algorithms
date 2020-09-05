
/*

    Problem Name :  Check if string is rotated by two places.
    Given : Two strings of variable length.
    To Do : Find if a string can be obtained by rotating another string two places.
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

/*

//-- My first approach 


void solve()
{
    string s1,s2;
    
    cin>>s1>>s2;
    
    int n = s1.length();
    int m = s2.length();
    int ans;
    if(n!=m)ans=0;
    else
    {
        bool check = true;
        if(n>2)
        {
            for(int i=2;i<n;i++)
            {
                if(s1[i]!=s2[i-2])
                {
                    check = false;
                    break;
                }
            }
            
            if(check)
            {
                if(s1[0]!=s2[n-2] || s1[1]!=s2[n-1])check = false;
            }
            
            if(check)
            {
                ans =1;
            }
            else
            {
                check = true;
                for(int i=2;i<n;i++)
                {
                    if(s2[i]!=s1[i-2])
                    {
                        check = false;
                        break;
                    }
                }
                
                if(check)
                {
                    if(s2[0]!=s1[n-2] || s2[1]!=s1[n-1])check = false;
                }
                
                ans=(check)?1:0;

            }
        }
        else if(n==1)
        {
            ans=(s1[0]==s2[0])?1:0;
        }
        else if(n==2)
        {
            ans=(s1[0]==s2[0] && s1[1]==s2[1])?1:0;
        }
    }
    
    cout<<ans<<"\n";
    
}
*/


void solve() // My second approach
{ 
    string str1,str2;
    cin>>str1>>str2;
    int ans;
    int len = str1.length();
    int len1 = str2.length(); 
    
    if(len!=len1)
    {
        cout<<0<<"\n";
        return;
    }
  
    string clock_rot = ""; 
    string anticlock_rot = ""; 

    anticlock_rot = anticlock_rot + 
                    str2.substr(len-2, 2) + 
                    str2.substr(0, len-2) ; 
  
    clock_rot = clock_rot + 
                str2.substr(2) + 
                str2.substr(0, 2) ; 
  
    ans = (str1.compare(clock_rot) == 0 || 
            str1.compare(anticlock_rot) == 0)?1:0;
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