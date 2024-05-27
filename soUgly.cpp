#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long dp[10005];
        int n; cin >> n;
        int i2, i3, i5; i2=i3=i5=1;
        dp[0]=0;
        dp[1]=1;
        for(int i=2; i<=n; i++)
        {
            dp[i] = min(dp[i2]*2, min(dp[i3]*3, dp[i5]*5));
            if(dp[i]==(dp[i2]*2)) i2++;
            if(dp[i]==(dp[i3]*3)) i3++;
            if(dp[i]==(dp[i5]*5)) i5++;
        }
        cout << dp[n] << endl;
    }
    return 0;
}