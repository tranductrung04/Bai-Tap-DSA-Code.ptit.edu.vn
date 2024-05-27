#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        long long f[100005] = {0};
        f[1] = 1;
        for(int i=2; i<=k; i++)
        {
            f[i] = f[i-1]*2;
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
/*
1 1 1   1 2 1   1 3 1   1 4 1
2 1 1   2 2 2   2 3 2   2 4 2
3 1 1   3 2 3   3 3 4   3 4 4
4 1 1   4 2 5   4 3 7   4 4 8
5 1 1   5 2 8   5 3 13  5 4 15
*/