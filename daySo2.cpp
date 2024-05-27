#include<bits/stdc++.h>
using namespace std;

void Try(vector<int> &a, vector<string> &res, int n)
{
    string s="";
    s+="[";
    for(int x : a) 
    {
        s+=to_string(x);
        s+=" ";
    }
    s.erase(s.size()-1);
    s+="]";
    res.push_back(s);
    
    for(int i=0; i<n-1; i++) a[i]+=a[i+1];
    a.pop_back();
    if(a.size()!=0) Try(a, res, n);
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        vector<string> res;
        for(auto &x : a) cin >> x;
        Try(a, res, n);
        reverse(res.begin(), res.end());
        for(auto x : res) cout << x << " ";
        cout << endl;
    }
    return 0;
}