#include <bits/stdc++.h>
using namespace std;

int digi(long long int n)
{
    if(n<=9)
    {
        return n;
    }
    long long int sum=0;

    while(n!=0)
    {
        sum = sum + (n%10);
        n=n/10;
    }
    return digi(sum);
}

int superDigit(string n, int k) {
    long long int sum=0;
    for(int i=0; i<(int)n.size(); i++)
    {
        sum += n[i] - '0';
    }

    return digi(sum*k);
}


int main()
{
    string s;
    int k;

    cin>>s;
    cin>>k;

    int result = superDigit(s, k);
    cout << result << "\n";

    return 0;
}


