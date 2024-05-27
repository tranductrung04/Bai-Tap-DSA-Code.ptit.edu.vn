#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        long long dp[100005];
        int a[100005];
        for(int i=0; i<n; i++) cin >> a[i];
        if(n==1) cout << a[0] << endl;
        else
        {
            dp[0] = min(a[0], a[1]);
            dp[1] = max(a[0], a[1]);
            dp[2] = max(a[0]+a[2], a[1]);
            for(int i=3; i<n; i++)
                 dp[i] = max(dp[i-1], dp[i-2]+a[i]);
            cout << dp[n-1] << endl;
        } 
    }
    return 0;
}