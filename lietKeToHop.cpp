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

int main()
{
    int n, k; cin >> n >> k;
    set<int> s;
    vector<int> idx(k);
    for(int i=0; i<n; i++)
    {
        int tmp; cin >> tmp;
        s.insert(tmp);
    }
    n = s.size();
    bool flag = 1;
    init(idx, k);
    while(flag)
    {
        for(int i : idx) cout << *next(s.begin(), i) << " ";
        cout << endl;
        gen(idx, n, k, flag);
    }
    return 0;
}