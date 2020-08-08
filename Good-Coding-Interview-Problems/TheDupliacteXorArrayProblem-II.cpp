//Given: An array Arr with all elements occuring twice except for x and y that occur once.
//To Do: Find the x and y in O(1) space and O(N) time

//***Beyourwild7***//

#include <bits/stdc++.h>
using namespace std;

bool hasBitSet(int n,int pos)
{
    int temp = n & (1<<pos);

    return temp!=0;
}

int main()
{
    int n;
    cin>>n;
    int result[2]={0};
    std::vector<int> v(n);

    for(auto &x : v)cin>>x;

    int ans=0;

    for(auto i : v)
    {
        ans^=i;
    }
    
    int pos=0;
    while(hasBitSet(ans,pos)==0)pos++;

    for(int i = 0; i < n; i++)
    {
        result[hasBitSet(v[i],pos)]^=v[i];
    }

    cout<<result[0]<<" "<<result[1]<<"\n";

    return 0;
}
