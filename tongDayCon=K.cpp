#include<bits/stdc++.h>
using namespace std;

void init(vector<int> &a, int k)
{
    for(int i=0; i<k; i++) a[i]=i;
}

void gen(vector<int> &a, int n, int k, bool &flag)
{
    int i=k-1;
    while(i>=0 && a[i]==n-k+i+1) i--;
    if(i==-1) flag=0;
    else
    {
        a[i]++;
        for(int j=i+1; j<k; j++) a[j]=a[i]+j-i;
    }
}

bool check(vector<int> &a, vector<int> &idx, int k, int s)
{
    int res = 0;
    for(int i : idx) res += a[i];
    return res==s;
}

void Try(vector<int> &a, int n, int k, int s, int &cnt)
{
    if(k>n) return;
    bool flag = 1;
    vector<int> idx(k);
    vector<vector<int>> v;
    init(idx, k);
    while(flag)
    {
        if(check(a, idx, k, s))
        {
            v.push_back(idx);
            cnt++;
        }
        gen(idx, n, k, flag);
    }
    reverse(v.begin(), v.end());
    for(auto x : v) 
    {
        for(int i : x) cout << a[i] << " ";
        cout << endl;
    }
    idx.clear();
    v.clear();
    Try(a, n, k+1, s, cnt);
}

int main()
{
    int n, s; cin >> n >> s;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    int cnt = 0;
    Try(a, n-1, 1, s, cnt);
    cout << cnt << endl;
    return 0;
}