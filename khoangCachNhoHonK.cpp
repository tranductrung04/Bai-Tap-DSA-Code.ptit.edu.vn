#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int a[100005];
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        long long cnt = 0;
        for(int i=0; i<n-1; i++)
        {
            int pos = lower_bound(a+i, a+n, k+a[i])-a;
            cnt += (long long)(pos-i-1);
        }
        cout << cnt << endl;
    }
    return 0;
}