#include<bits/stdc++.h>
using namespace std;

int n, a[10][10];
bool flag = 0;
vector<string> res;
int c[100][100]={0};

void Try(int i, int j, string s)
{
    if(i==n && j==n)
    {
        flag = 1;
        res.push_back(s);
        return;
    }
    if(i<=n && j<=n)
    {
        if(!c[i][j])
        {
            if(a[i+1][j]) { c[i][j]=1; Try(i+1, j, s+"D"); }
            c[i][j]=0;
            if(a[i][j+1]) { c[i][j]=1; Try(i, j+1, s+"R"); }
            c[i][j]=0;
            if(a[i][j-1]) { c[i][j]=1; Try(i, j-1, s+"L"); }
            c[i][j]=0;
            if(a[i-1][j]) { c[i][j]=1; Try(i-1, j, s+"U"); }
            c[i][j]=0;
        }
        return;
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        res.clear();
        flag = 0;
        cin >> n;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++) cin >> a[i][j];
        }
        if(!a[1][1] || !a[n][n]) cout << -1;
        else
        {
            Try(1, 1, "");
            if(flag) 
            {
                sort(res.begin(), res.end());
                for(auto x : res) cout << x << " ";
            }
            else cout << -1;
        }
        cout << endl;
    }
}