#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        long long a[100005], cnt = 0;
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        for(int i=0; i<n-1; i++)
        {
            int r = upper_bound(a+i+1, a+n, k-a[i])-a;
            int l = lower_bound(a+i+1, a+n, k-a[i])-a;
            cnt += (long long) (r-l);
        }
        cout << cnt << endl;
    }
    return 0;
}