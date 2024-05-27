#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,k; cin >> n >> k;
        long long f[100005]={0};
        f[1]=1;
        for(int i=2; i<=k; i++) 
        {
            f[i] = f[i-1] * 2;
            f[i] %= mod;
        }
        for(int i=k+1; i<=n; i++)
        {
            for(int j=1; j<=k; j++) 
            {
                f[i] += f[i-j];
                f[i] %= mod;
            }
        }
        cout << f[n] << endl;
    }
    return 0;
}