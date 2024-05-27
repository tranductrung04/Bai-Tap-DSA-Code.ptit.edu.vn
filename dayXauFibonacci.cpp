#include<bits/stdc++.h>
using namespace std;

long long f[95];

string solve(long long n, long long k)
{
    while(n>2)
    {
        if(k>f[n-2]){ k-=f[n-2]; n-=1; }
        else n-=2;
    }
    if(n==1) return "A";
    else return "B";
}

int main()
{
    f[1]=f[2]=1; 
    for(int i=3; i<93; i++) f[i]=f[i-1]+f[i-2];
    int t; cin >> t;
    while(t--)
    {
        long long n, k; cin >> n >> k;
        cout << solve(n, k) << endl;
    }
    return 0;
}
