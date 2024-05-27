#include<bits/stdc++.h>
using namespace std;

vector<string> res;
int n;
int a[15][15];
bool flag=0;

void Try(int i, int j, string s)
{
    if(i==n && j==n)
    {
        res.push_back(s);
        flag = 1;   
        return;
    }
    if(i<=n && j<=n)
    {
        if(a[i+1][j]) Try(i+1, j, s+"D");
        if(a[i][j+1]) Try(i, j+1, s+"R");
        return;
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        flag = 0;
        cin >> n;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++) cin >> a[i][j];
        }
        if(!a[1][1] || !a[n][n]) cout << -1 ;
        else
        {
            Try(1, 1, "");
            if(flag) for(auto x : res) cout << x << " ";
            else cout << -1;
            res.clear();
        }
        cout << endl;
    }
}