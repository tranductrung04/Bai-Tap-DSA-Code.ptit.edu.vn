#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        long long a[55];
        for(int i=0; i<n; i++) cin >> a[i];
        if(k>n/2) sort(a, a+n, greater<int>());
        else sort(a, a+n);
        long long sum1=0, sum2=0;
        for(int i=0; i<k; i++) sum1 += a[i];
        for(int i=k; i<n; i++) sum2 += a[i];
        cout << abs(sum2 - sum1) << endl;
    }
    return 0;
}