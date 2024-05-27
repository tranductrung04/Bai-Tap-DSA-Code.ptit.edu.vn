#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        int a[100005], b[100005];
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<m; i++) cin >> b[i];
        int Max = *max_element(a, a+n);
        int Min = *min_element(b, b+m);
        cout << (long long) Max * Min << endl;
    }
    return 0;
}