#include<bits/stdc++.h>
using namespace std;
const long long mod = 123456789;

long long count(long long n)
{
    if(n==0) return 1;
    long long tmp = count(n/2);
    if(n%2==0) return tmp*tmp%mod;
    else return (tmp*tmp%mod)*2%mod;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n; cin >> n;
        cout << count(n-1) << endl;
    }
    return 0;
}