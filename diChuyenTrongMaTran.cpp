#include<bits/stdc++.h>
using namespace std;

int m, n, a[105][105], cnt=0;

void Try(int i, int j, int &cnt)
{
    if(i==n && j==m) {cnt++; return;}
    if(i<=n && j<=m)
    {
        if(i+1<=n) Try(i+1, j, cnt);
        if(j+1<=m) Try(i, j+1, cnt);
        return;
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cnt = 0;
        cin >> n >> m;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++) cin >> a[i][j];
        }
        Try(1, 1, cnt);
        cout << cnt << endl;
    }
}