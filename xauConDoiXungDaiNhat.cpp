#include<bits/stdc++.h>
using namespace std;

bool dp[1005][1005];

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        memset(dp, 0, sizeof(dp));
        int n=s.size();
        int res = 1;
        for(int i=1; i<=n; i++) dp[i][i]=1;
        for(int i=2; i<=n; i++)
        {
            for(int j=1; j<=n-i+1; j++)
            {
                int k=j+i-1;
                if(s[k-1]==s[j-1])
                {
                    if(i==2) dp[j][k]=1;
                    else if(dp[j+1][k-1]) dp[j][k]=1;
                    if(dp[j][k]) res = max(res, i);
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}