#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long c, n; cin >> c >> n;
    long long a[105];
    bool dp[25005]={0};
    dp[0]=1;
    long long res = LLONG_MIN;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++)
    {
        for(long long j=c; j>=a[i]; j--) 
            if(dp[j-a[i]])
            {
                res = max(res, j);
                dp[j]=1; 
            }
    }
    cout << res << endl;
    return 0;
}