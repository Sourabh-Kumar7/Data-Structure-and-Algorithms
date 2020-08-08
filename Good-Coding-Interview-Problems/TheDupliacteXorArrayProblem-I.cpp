//Given : An array Arr with all the elements occuring twice except for element x that occur once.
//To Do : Find the element x in O(1) space and O(N) time.

//***Beyourwild7***//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);

    for(auto &x : v)cin>>x;

    int ans=0;

    for(auto i : v)
    {
        ans^=i;
    }

    cout<<ans;
    
    return 0;
}
