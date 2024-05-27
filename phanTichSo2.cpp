#include<bits/stdc++.h>
using namespace std;

int n;
vector<string> res;

void Try(int i, int sum, string s)
{
    if(sum > n) return;
    if(sum == n) 
    {
        s.back()='(';
        if(s!=")10(") reverse(s.begin(), s.end());
        res.push_back(s);
    }
    for(int j=i; j<=n; j++)
    {
        if(sum + j <= n) Try(j, sum+j, s+to_string(j)+" ");
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        res.clear();
        cin >> n;
        Try(1, 0, ")");
        sort(res.begin(), res.end(), greater<string>());
        cout << res.size() << endl;
        for(auto &x : res) 
        {
            if(x == ")10(") cout << "(10) "; 
            else cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}