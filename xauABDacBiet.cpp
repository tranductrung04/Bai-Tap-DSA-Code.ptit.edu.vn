#include<bits/stdc++.h>
using namespace std;

void gen(string &a, int n, bool &flag)
{
    int i=n-1;
    while(i>=0 && a[i]=='B') a[i--]='A';
    if(i==-1) flag = 0;
    else a[i] = 'B';
}

bool check(string &a, int n, int k)
{
    int cnt = 0;
    int res = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(a[i]=='A')
        {
            cnt++;
            res = max(res, cnt);
        }
        else cnt=0;
    }
    return res==k;
}

int main()
{
    int n, k; cin >> n >> k;
    vector<string> res;
    string a(n, 'A');
    bool flag = 1;
    while(flag)
    {
        if(check(a, n, k)) res.push_back(a);
        gen(a, n, flag);
    }
    cout << res.size() << endl;
    for(string x : res) cout << x << endl;
    return 0;
}