// Problem Statment : Given a number n, print all primes smaller than or equal to n.
// n <= 10000000 or 1e7;
//By using this you can also calculate no. of prime no. less than n;
//Time Complexity : O(n*log(log(n))) 


#include <bits/stdc++.h> 
using namespace std; 
  
void SieveOfEratosthenes(int n)
{
  bool prime[n+1];
  memset(prime,true,sizeof(prime));
  
  for(int i=2;i*i<=n;i++)
  {
    if(prime[i])
    {
      for(int j=i*i;j<=n;j+=i)
      {
        prime[i]=false;
      }
    }
  }
}
