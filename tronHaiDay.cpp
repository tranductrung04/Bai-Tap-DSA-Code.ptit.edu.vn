#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        int a[100005], b[100005], c[100005];
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];
        sort(a, a+n); sort(b, b+m);
        int x=0, y=0, z=0;
        while(x<n && y<m)
        {
            if(a[x]<=b[y]) c[z++]=a[x++];
            else c[z++]=b[y++];
        }
        while(x<n) c[z++]=a[x++];
        while(y<m) c[z++]=b[y++];
        for(int i=0; i<z; i++) cout << c[i] << " ";
        cout << endl;
    }
}