#include<bits/stdc++.h>
using namespace std;

int n, x, a[25], cnt=0;
vector<string> res;

void Try(int i, int sum, string s)
{
    if(sum>x) return;
    else if(sum==x)
    {
        cnt++;
        s.back()='}';
        res.push_back(s);
    }
    else
    {
        for(int j=i; j<n; j++)
        {
            if(sum+a[j]<=x)
                Try(j, sum+a[j], s+to_string(a[j])+" ");
        }
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cnt = 0;
        res.clear();
        cin >> n >> x;
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        Try(0, 0, "{");
        if(res.empty()) cout << -1;
        else 
        {
            cout << cnt << " ";
            for(auto x : res) cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}