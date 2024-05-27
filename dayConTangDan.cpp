#include<bits/stdc++.h>
using namespace std;

void Try(vector<int> &a, vector<int> &idx, vector<string> &res, int n, int m)
{
    for(int i=0; i<=1; i++)
    {
        idx[m]=i;
        if(m==n-1)
        {
            bool flag = 1;
            int tmp=0;
            int cnt = 0;
            string s="";
            for(int i=0; i<n; i++)
            {
                if(idx[i])
                { 
                    cnt++;
                    if(a[i]<tmp)
                    {
                        flag=0;
                        break;
                    }
                    else tmp = a[i];
                    s += to_string(a[i]);
                    s += " ";
                }
            } 
            if(flag && cnt!=1) res.push_back(s);
        }
        else Try(a, idx, res, n, m+1);
    }
}

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    vector<int> idx(n, 0);
    vector<string> res;
    for(int &x : a) cin >> x;
    Try(a, idx, res, n, 0);
    sort(res.begin(), res.end());
    for(auto x : res) cout << x << endl;
    return 0;
}