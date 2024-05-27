#include<bits/stdc++.h>
using namespace std;

void solve(int a[], int b[], int n, int m)
{
    int pro[100005]={0};
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            pro[i+j] += a[i]*b[j];
        }
    for(int i=0; i<n+m-1; i++) cout << pro[i] << " ";
    cout << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        int p[105], q[105];
        for(int i=0; i<n; i++) cin >> p[i];
        for(int i=0; i<m; i++) cin >> q[i];
        solve(p, q, n, m);
    }
    return 0;
}