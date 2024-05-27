#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        int a[505][505];
        int dp[505][505];
        int res = 0;
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
            for(int j=1; j<=n; j++)
            {
                if(a[i][j]==1)
                {
                    if(a[i-1][j-1] && a[i][j-1] && a[i-1][j]) 
                        dp[i][j]=min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1])) + 1;
                }
                res = max(dp[i][j], res);
            }
        }
        cout << res << endl;
    }
    return 0;
}
/*
0 1 1 0 1
1 1 0 1 0
0 1 1 1 0
1 1 1 1 0
1 1 1 1 1
0 0 0 0 0

  1 2 3 4 5
1 0 1 1 0 1
2 1 1 0 1 0
3 0 1 1 1 0
4 1 1 2 2 0
5 1 2 2 3 1
6 0 0 0 0 0
*/