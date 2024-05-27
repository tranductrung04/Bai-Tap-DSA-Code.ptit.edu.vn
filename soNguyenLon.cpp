#include<bits/stdc++.h>
using namespace std;

int dp[1005][1005]={0};

int main()
{
    int t; cin >> t;
    while(t--)
    {
        memset(dp, 0, sizeof(dp));
        string n, m; cin >> n >> m;
        for(int i=1; i<=n.size(); i++)
        {
            for(int j=1; j<=m.size(); j++)
            {
                if(n[i-1]==m[j-1]) dp[i][j]= dp[i-1][j-1] + 1;
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        cout << dp[n.size()][m.size()] << endl;
    }
    return 0;
}