#include<bits/stdc++.h>
using namespace std;

bool check(long long a[], long long n, long long k)
{
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            int r = upper_bound(a+j+1, a+n, k-a[i]-a[j])-a;
            int l = lower_bound(a+j+1, a+n, k-a[i]-a[j])-a;
            if(r>l) return true;
        }
    }
    return false;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n, k; cin >> n >> k;
        long long a[5005];
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        cout << ((check(a, n, k))?"YES":"NO") << endl;
    }
    return 0;
}