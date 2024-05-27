#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n, k; cin >> n >> k;
        long long a[100005], cnt = 0;
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        for(int i=0; i<n-1; i++)
            cnt += lower_bound(a+i+1, a+n, k+a[i])-a-i-1;
        cout << cnt << endl;
    }
    return 0;
}