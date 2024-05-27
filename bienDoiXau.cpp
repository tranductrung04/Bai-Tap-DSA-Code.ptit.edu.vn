#include<bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string a, b; cin >> a >> b;
        int n=a.size(), m=b.size();
        memset(dp, 0, sizeof(dp));
        int res = 0;
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=m; j++)
            {
                if(i==0 || j==0) dp[i][j]=i+j;
                else if(a[i-1]==b[j-1]) dp[i][j]=dp[i-1][j-1];
                else dp[i][j]=min(dp[i-1][j-1], min(dp[i][j-1], dp[i-1][j])) + 1;
            }
        }
        cout << dp[n][m] << endl;
    }
    return 0;
}
/*
    0 1 2 3 4 5
    a e b d d c
0 a 0 1 2 3 4 5
1 c 1 1 2 3 4 4 
2 e 2 1 2 3 4 5
3 b 3 2 1 2 3 4
4 d 4 3 2 1 2 3
5 d 5 4 3 2 1 2
*/