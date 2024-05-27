#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;

long long rev(long long n)
{
    long long res = 0;
    while(n)
    {
        res *= 10;
        res += n%10;
        n /= 10;
    }
    return res;
}

long long Pow(long long a, long long b)
{
    if(!b) return 1;
    long long tmp1 = Pow(a, b/2);
    if(b%2==0) return tmp1*tmp1%mod;
    else return (tmp1*tmp1%mod)*a%mod;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n; cin >> n;
        long long r = rev(n);
        cout << Pow(n, r) << endl;
    }
    return 0;
}