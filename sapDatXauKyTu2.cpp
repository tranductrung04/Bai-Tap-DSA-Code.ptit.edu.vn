#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int d;
        string s;
        cin >> d >> s;
        map<char, int> m;
        bool flag = 1;
        for(auto x : s) m[x]++;
        for(auto x : m)
            if(x.second*d-1>s.size()) {flag = 0; break;}
        if(!flag) cout << -1 << endl;
        else cout << 1 << endl;
    }
    return 0;
}