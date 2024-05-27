#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int i = s.size()-1;
        while(i>=0 && s[i]=='1') s[i--]='0';
        if(i==-1) cout << s << endl;
        else { s[i]='1'; cout << s << endl;}
    }
    return 0;
}