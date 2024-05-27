#include<bits/stdc++.h>
using namespace std;

void init(vector<int> &a, int n)
{
    for(int i=0; i<n; i++) a[i]=i;
}

void gen(vector<int> &a, int n, bool &flag)
{
    int i=n-2;
    while(i>=0 && a[i]>=a[i+1]) i--;
    if(i==-1) flag = 0;
    else
    {
        int j=n-1;
        while(a[j]<=a[i]) j--;
        swap(a[i], a[j]);
        int l=i+1, r=n-1;
        while(l<r)
        {
            swap(a[l], a[r]);
            l++; r--;
        }
    }
}

bool check(int m[][15], vector<int> a, int n, int k)
{
    int res = 0, idx=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            if(j == a[idx]) res += m[i][j];
        idx++;
    }
    return res==k;
}

int main()
{
    int n, k; cin >> n >> k;
    int m[15][15];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++) cin >> m[i][j];
    vector<int> a(n);
    vector<vector<int>> res;
    bool flag = 1;
    init(a, n);
    while(flag)
    {
        if(check(m, a, n, k)) res.push_back(a);
        gen(a, n, flag);
    }
    cout << res.size() << endl;
    for(auto x : res)
    {
        for(int i : x) cout << i+1 << " ";
        cout << endl;
    }
    return 0;
}