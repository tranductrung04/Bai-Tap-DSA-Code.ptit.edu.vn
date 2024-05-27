#include<bits/stdc++.h>
using namespace std;

void init(string &s, int n)
{
    for(int i=1; i<=n; i++) s[i]='A';
}

void gen(string &s, int n, bool &flag)
{
    int i=n;
    while(i>=1 && s[i]=='H') s[i--]='A';
    if(i==0) flag = 0;
    else s[i]='H';
}

bool check(string &s, int n)
{
    if(s[1]!='H') return false;
    if(s[n]!='A') return false;
    for(int i=1; i<=n; i++)
    {
        if(s[i]=='H')
            if(s[i+1]=='H' || s[i-1]=='H') return false;
    }
    return true;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s="";
        bool flag = 1;
        init(s, n);
        while(flag)
        {
            if(check(s, n))
            {
                for(int i=1; i<=n; i++) cout << s[i];
                cout << endl;
            }
            gen(s, n, flag);
        }
    }
    return 0;
}