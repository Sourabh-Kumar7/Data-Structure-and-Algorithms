/*

Problem statement : Given an array of size n and an integer k(window size).
To find : the count of distinct numbers in all windows of size k.
Time Complexity : O(N)
Space Complexity : O(N)

*/

//***CodeBy_Beyourwild7***//

#include <bits/stdc++.h>
using namespace std;

vector<int> distinctWindowCount(std::vector<int> array, int windowSize)
{
    int len = array.size();

    unordered_map<int,int> freq;

    vector<int> result;
    for(int i=0;i<windowSize;i++)
    {
        freq[array[i]]++;
    }

    result.push_back(freq.size());

    for(int i = windowSize;i<len;i++)
    {
        freq[array[i]]++;
        freq[array[i-windowSize]]--;

        if(freq[array[i-windowSize]]==0)
        {
            freq.erase(array[i-windowSize]);
        }

        result.push_back(freq.size());
    }

    return result;

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int arraySize;
    int windowSize;

    cin>>arraySize;
    cin>>windowSize;

    vector<int> givenArray(arraySize);

    for(auto &val : givenArray)cin>>val;

    vector<int> ans = distinctWindowCount(givenArray,windowSize);
    
    for(auto val : ans)cout<<val<<" ";

    return 0;
}
