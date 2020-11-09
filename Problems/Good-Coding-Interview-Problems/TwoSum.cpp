//Given : an array of integers and required target.
//To do : Find two elements whose sum is required target and return their index, if there ain't one return -1,-1;

#include<bits/stdc++.h>
using namespace std;

vector<int> pair_sum(vector<int> arr,int target)
{
	map<int, int> mp;
	int length = arr.size();
	int val;
	for(int i=0;i<length;i++)
	{
		val = target-arr[i];

		if(mp[val])
		{
			return {mp[val]-1,i}; 
		}
		mp[arr[i]]=i+1;
	}

	return {-1,-1};
};


int main()
{
	int no_of_elements;
	cin>>no_of_elements;

	vector<int> given_elements(no_of_elements);

	for(auto &x : given_elements)cin>>x;

	int k; //pair sum we want
	cin>>k;
    vector<int> ans;
    ans = pair_sum(given_elements,k);
	cout<<ans[0]<<" "<<ans[1]<<"\n";
	
	return 0;
}
