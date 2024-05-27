#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        long long  a[5005]; 
        long long cnt=0;
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        for(int i=0; i<n-2; i++)
        {
            for(int j=i+1; j<n-1; j++)
                cnt += lower_bound(a+j+1, a+n, k-a[i]-a[j])-a-j-1;
        }
        cout << cnt << endl;
    }
    return 0;
}