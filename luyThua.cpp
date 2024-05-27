#include<bits/stdc++.h>
using namespace std;
const long long q = 1e9+7;

long long Mul(long long a, long b)
{
    if(b==0) return 0;
    long long tmp1 = Mul(a, b/2);
    if(b%2==0) return 2*tmp1%q;
    else return (2*tmp1+a)%q;
}

long long Pow(long long n, long long k)
{
    if(k==0) return 1;
    if(k==1) return n;
    long long tmp1 = Pow(n, k/2); 
    long long tmp2 = Mul(tmp1, tmp1);
    if(k%2==0) return tmp2%q;
    else return  tmp2*n%q;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n, k; cin >> n >> k;
        cout << Pow(n, k) << endl;
    }
    return 0;
}
