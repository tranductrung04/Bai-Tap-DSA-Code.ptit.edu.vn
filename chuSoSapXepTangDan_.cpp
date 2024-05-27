#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;

int main()
{
    long long dp[105]={0};
    dp[1]=10;
    vector<long long> a(10, 1);
    for(int i=2; i<=100; i++)
    {
        for(int j=1; j<=9; j++)
        {
            long long sum = 0;
            for(int k=j; k<=9; k++)
            {
                sum += a[k]; sum %= mod;
            }
            a[j]=sum;
            dp[i]+=a[j]; dp[i]%=mod;
        }
        dp[i]+=dp[i-1]; dp[i]%=mod;
    }
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout << dp[n] << endl;
    }
    return 0;
}