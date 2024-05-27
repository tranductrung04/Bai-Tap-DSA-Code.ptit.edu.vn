#include<bits/stdc++.h>
using namespace std;

int n, k, a[20];
vector<int> m(20, 0);
vector<vector<int>> res;

void Try(int i)
{
    for(int j=m[i-1]+1; j<=n-k+i; j++)
    {
        m[i]=j;
        if(i==k)
        {
            res.push_back(m);
        }
        else Try(i+1);
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        fill(m.begin(), m.end(), 0);
        res.clear();
        cin >> n >> k;
        for(int i=1; i<=n; i++) cin >> a[i];
        sort(a, a+n+1);
        Try(1);
        for(auto &x : res)
            sort(x.begin(), x.end());
        for(auto x : res) 
        {
            for(auto i : x) if(a[i]!=0) cout << a[i] << " ";
            cout << endl;
        }
    }
    return 0;
}