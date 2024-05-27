#include<bits/stdc++.h>
using namespace std;

void Try(set<string> &s, vector<int> &a, int n, int k, int m)
{
    for(int i=a[m-1]+1; i<=n-k+m; i++)
    {
        a[m]=i;
        if(m==k)
        {
            for(int j=1; j<=k; j++) cout << *next(s.begin(), a[j]-1) << " ";
            cout << endl;
        }
        else Try(s, a, n, k, m+1);
    }
}

int main()
{
    int n, k; cin >> n >> k;
    set<string> s;
    vector<int> a(k+1);
    for(int i=0; i<n; i++)
    {
        string tmp; cin >> tmp;
        s.insert(tmp);
    }
    n = s.size();
    Try(s, a, n, k, 1);
    return 0;
}