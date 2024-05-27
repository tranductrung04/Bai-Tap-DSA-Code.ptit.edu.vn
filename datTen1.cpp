#include<bits/stdc++.h>
using namespace std;

void Try(set<string> &a, vector<int> &idx, int n, int k, int m)
{
    for(int i=idx[m-1]+1; i<=n-k+m; i++)
    {
        idx[m]=i;
        if(m==k) 
        {
            for(int j=1; j<=k; j++) cout << *next(a.begin(), idx[j]-1) << " ";
            cout << endl;
        }
        else Try(a, idx, n, k, m+1);
    }
}

int main()
{
    int n, k; cin >> n >> k;
    set<string> a;
    vector<int> idx(k+1);
    for(int i=0; i<n; i++)
    {
        string tmp; cin >> tmp;
        a.insert(tmp);
    }
    n = a.size();
    Try(a, idx, n, k, 1);
    return 0;
}