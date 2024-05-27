#include<bits/stdc++.h>
using namespace std;

int n, a[20];
vector<int> m(20, 0);
vector<vector<int>> res;

bool prime(int x)
{
    if(x<2) return false;
    for(int i=2; i<=sqrt(x); i++)
        if(x%i==0) return false;
    return true;
}

bool check()
{
    int sum = 0;
    for(auto i : m) sum += a[i];
    return prime(sum);
}

void Try(int i, int k)
{
    for(int j=m[i-1]+1; j<=n-k+i; j++)
    {
        m[i]=j;
        if(i==k)
        {
            if(check()) res.push_back(m);
        }
        else Try(i+1, k);
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        res.clear();
        fill(m.begin(), m.end(), 0);
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
}