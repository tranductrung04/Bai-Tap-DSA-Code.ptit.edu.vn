#include<bits/stdc++.h>
using namespace std;

int n, a[20];
vector<vector<int>> res;
vector<int> m(20, 0);

bool cmp(int x, int y)
{
    return a[x] > a[y];
}

bool check(int k)
{
    int sum = 0;
    for(int i=0; i<m.size(); i++) sum += a[m[i]];
    return sum%2==1;
}

void Try(int i, int k)
{
    for(int j=m[i-1]+1; j<=n-k+i; j++)
    {
        m[i]=j;
        if(i==k) 
        {
            if(check(k)) res.push_back(m);
        }

        else Try(i+1, k);
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        fill(m.begin(), m.end(), 0);
        res.clear();
        cin >> n;
        for(int i=1; i<=n; i++) cin >> a[i];
        sort(a, a+n+1);
        for(int i=1; i<=n; i++) Try(1, i);
        for(auto &x : res)
            sort(x.begin(), x.end(), greater<int>());
        sort(res.begin(), res.end());
        for(auto x : res)
        {
            for(auto i : x) if(a[i]!=0) cout << a[i] << " ";
            cout << endl;
        }
    }
    return 0;
}