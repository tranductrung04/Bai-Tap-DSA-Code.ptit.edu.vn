#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;

long long Mul(long long a, long long b)
{
    if(!b) return 0;
    long long tmp = Mul(a, b/2);
    if(b%2==0) return 2*tmp%mod;
    else return (2*tmp+a)%mod;
}

long long Pow(long long a, long long b)
{
    if(!b) return 1;
    long long tmp1 = Pow(a, b/2);
    long long tmp2 = Mul(tmp1, tmp1);
    if(b%2==0) return tmp2%mod;
    else return tmp2*a%mod; 
}

int main()
{
    while(1)
    {
        long long a, b; cin >> a >> b;
        if(!a && !b) break;
        cout << Pow(a, b) << endl;
    }
    return 0;
}