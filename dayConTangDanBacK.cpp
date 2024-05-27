#include<bits/stdc++.h>
using namespace std;

void init(vector<int> &a, int k)
{
    for(int i=0; i<k; i++) a[i]=i;
}

void gen(vector<int> &a, int n, int k, bool &flag)
{
    int i=k-1;
    while(i>=0 && a[i]==n-k+i) i--;
    if(i==-1) flag = 0;
    else 
    {
        a[i]++;
        for(int j=i+1; j<k; j++) a[j]=a[i]+j-i;
    }
}

bool check(vector<int> &a, vector<int> &idx, int k)
{
    for(int i=1; i<k; i++) if(a[idx[i]] < a[idx[i-1]]) return false;
    return true;
}

int main()
{
    int n, k; cin >> n >> k;
    vector<int> idx(k), a(n);
    for(int &i : a) cin >> i;
    bool flag = 1;
    int cnt = 0;
    init(idx, k);
    while(flag)
    {
        if(check(a, idx, k)) cnt++;
        gen(idx, n, k, flag);
    }
    cout << cnt << endl;
}