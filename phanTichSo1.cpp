#include<bits/stdc++.h>
using namespace std;

void out(vector<int> &v, vector<string> &res)
{
    vector<int> a = v;
    sort(a.begin(), a.end(), greater<int>());
    string s="";
    s+="(";
    for(int x : a)
    {
        s+=to_string(x);
        s+=" ";
    }
    s.erase(s.end()-1);
    s+=") ";
    res.push_back(s);
}

void Try(vector<int> &a, vector<string> &res, int j, int n)
{   
    if(!n) out(a, res);
    for(int i=n; i>=j; i--)
    {   
        a.push_back(i);
        Try(a, res, i, n-i);
        a.pop_back();
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a;
        vector<string> res;
        Try(a, res, 1, n);
        sort(res.begin(), res.end(), greater<string>());
        if(n==10)
        {
            cout << "(10) ";
            res.erase(res.begin()+40);
        }
        for(string x : res) cout << x;
        cout << endl;
    }
    return 0;
}