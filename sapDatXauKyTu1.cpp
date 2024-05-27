#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        bool flag = 1;
        map<char, int> m;
        for(int i=0; i<s.size(); i++) m[s[i]]++;
        for(auto x : m)
            if(x.second*2-1>s.size()) {flag = 0; break;}
        if(!flag) cout << -1 << endl;
        else cout << 1 << endl;
    }
    return 0;
}