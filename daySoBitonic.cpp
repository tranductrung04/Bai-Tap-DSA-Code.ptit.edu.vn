#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[105], inc[105], dec[105];
        for(int i=0; i<n; i++) {cin >> a[i]; inc[i]=a[i]; dec[i]=a[i]; }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<i; j++)
                if(a[j]<a[i]) inc[i]=max(a[i]+inc[j], inc[i]);
        }
        for(int i=n-1; i>=0; i--)
        {
            for(int j=i+1; j<n; j++)
                if(a[i]>a[j]) dec[i]=max(a[i]+dec[j], dec[i]);
        }
        int res = INT_MIN;
        for(int i=0; i<n; i++)
            res = max(res, inc[i]+dec[i]-a[i]);
        cout << res << endl;
    }
    return 0;
}