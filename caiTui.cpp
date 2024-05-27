#include<bits/stdc++.h>
using namespace std;

int f[1005][1005]={0};

int main()
{
    int t; cin >> t;
    while(t--)
    {
        memset(f, 0, sizeof(f));
        int n, v; cin >> n >> v;
        int a[1005], c[1005];
        for(int i=1; i<=n; i++) cin >> a[i];
        for(int i=1; i<=n; i++) cin >> c[i];
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=v; j++)
            {
                f[i][j] = max(f[i-1][j], (j>=a[i])?c[i]+f[i-1][j-a[i]]:0);
            }
        }
        cout << f[n][v] << endl;
    }
    return 0;
}