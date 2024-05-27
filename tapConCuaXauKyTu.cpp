#include<bits/stdc++.h>
using namespace std;

int n, a[20];
string s;
set<string> se;

void out()
{
    string tmp = "";
    for(int i=1; i<=n; i++) if(a[i]) tmp += s[i-1];
    se.insert(tmp);
}

void Try(int i)
{
    for(int j=0; j<=1; j++)
    {
        a[i]=j;
        if(i==n)
        {
            out();
        }
        else Try(i+1);
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> s;
        Try(1);
        for(auto x : se) cout << x << " ";
        cout << endl;
    }
    return 0;
}