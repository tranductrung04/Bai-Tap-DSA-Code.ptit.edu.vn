#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[100005];
        long long sum[100005]={0};
        bool flag = 0;
        for(int i=1; i<=n; i++)
        {
            cin >> a[i];
            sum[i] = (long long) sum[i-1]+a[i];
        }
        for(int i=1; i<=n; i++)
        {
            if(sum[i]-a[i] == sum[n]-sum[i]) 
            {
                cout << i << endl; flag = 1;
                break;
            }
        }
        if(!flag) cout << -1 << endl;
    }
    return 0;
}