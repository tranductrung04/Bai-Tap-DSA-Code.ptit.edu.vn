#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int a[], int l, int r, int x)
{
    while(l<=r)
    {
        int m=(l+r)/2;
        if(a[m]==x) return true;
        else if(a[m]<x) l=m+1;
        else r=m-1;
    }
    return false;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, x; cin >> n >> x;
        int a[100005];
        for(int i=0; i<n; i++) cin >> a[i];
        if(binarySearch(a, 0, n-1, x)) cout << 1 << endl;
        else cout << -1 << endl;
    }
    return 0;
}