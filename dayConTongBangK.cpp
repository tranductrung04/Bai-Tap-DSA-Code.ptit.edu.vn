#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> &a, vector<int> &idx, int n, int k)
{
    int sum = 0;
    for(int i=1; i<=n; i++)
        if(idx[i]) sum += a[i-1];
    return sum == k;
}

void Try(vector<int> &a, vector<int> &idx, vector<string> &res, int n, int k, int m)
{
    for(int i=0; i<=1; i++)
    {
        idx[m]=i;
        if(m==n) 
        {
            if(check(a, idx, n, k))
            {
                string s="";
                s+="[";
                for(int j=1; j<=n; j++)
                    if(idx[j])
                    {
                        s += to_string(a[j-1]);
                        s += " ";
                    }
                s.erase(s.end()-1);
                s += "]";
                res.push_back(s);
            }
        }
        else Try(a, idx, res, n, k, m+1);
    }
    
} 

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        vector<int> idx(n+1);
        vector<string> res;
        for(int &x : a) cin >> x;
        sort(a.begin(), a.end());
        Try(a, idx, res, n, k, 1);
        reverse(res.begin(), res.end());
        if(res.empty()) cout << -1;
        else for(string x : res) cout << x << " ";
        cout << endl;
    }
    return 0;
}