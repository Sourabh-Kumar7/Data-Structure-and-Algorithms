//  Problem Statement : Generate all prime numbers less than N
//  Time Complexity : O(N)


#include<bits/stdc++.h> 
using namespace std; 
const long long MAX_SIZE = 1000001; 

// isPrime[] : isPrime[i] is true if number is prime 
// prime[] : stores all prime number less than N 
// SPF[] that store smallest prime factor of number 
// [for Exp : smallest prime factor of '8' and '16' 
// is '2' so we put SPF[8] = 2 , SPF[16] = 2 ] 


vector<long long >isprime(MAX_SIZE , true); 
vector<long long >prime; 
vector<long long >SPF(MAX_SIZE); 

void manipulated_seive(int N) 
{ 
	isprime[0] = isprime[1] = false ; 

	for (long long int i=2; i<N ; i++) 
	{ 
		if (isprime[i]) 
		{ 
			prime.push_back(i); 
			SPF[i] = i; 
		}  
		for (long long int j=0; j < (int)prime.size() && i*prime[j] < N && prime[j] <= SPF[i]; j++) 
		{ 
			isprime[i*prime[j]]=false; 

			SPF[i*prime[j]] = prime[j] ; 
		} 
	} 
} 

int main() 
{ 
	int N = 13 ;

	manipulated_seive(N); 

	for (int i=0; i<prime.size() && prime[i] <= N ; i++) 
		cout << prime[i] << " "; 

	return 0; 
} 
