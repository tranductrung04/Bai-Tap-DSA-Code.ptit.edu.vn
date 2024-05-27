#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[1005], lis[1005];
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++)
        {
            lis[i]=1;
            for(int j=0; j<i; j++)
                if(a[j]<=a[i] && lis[j]+1>lis[i]) lis[i]=lis[j]+1;
        }
        int res = INT_MIN;
        for(int i=0; i<n; i++) res = max(res, lis[i]);
        cout << n-res << endl;
    }
    return 0;
}