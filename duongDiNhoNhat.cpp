#include<bits/stdc++.h>
using namespace std;

long long a[1005][1005], dp[1005][1005];

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        memset(a, 0, sizeof(a));
        memset(dp, 0, sizeof(dp));
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                cin >> a[i][j];
                dp[i][j]=a[i][j];
            }
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(i==1) dp[i][j] = dp[i][j-1]+a[i][j];
                else if(j==1) dp[i][j] = dp[i-1][j]+a[i][j];
                else dp[i][j]=min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]))+a[i][j];
            }
        }
        cout << dp[n][m] << endl;
    }
    return 0;
}