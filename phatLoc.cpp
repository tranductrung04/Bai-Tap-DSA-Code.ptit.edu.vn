#include<bits/stdc++.h>
using namespace std;

void init(vector<int> &a, int n)
{
    for(int i=1; i<=n; i++) a[i] = 6;
}

void gen(vector<int> &a, int n, bool &flag)
{
    int i=n;
    while(i>=1 && a[i]==8) a[i--]=6;
    if(i==0) flag=0;
    else a[i]=8;
}

bool check(vector<int> &a, int n)
{
    int cnt = 0;
    if(a[1]!=8) return false;
    if(a[n]!=6) return false;
    for(int i=1; i<=n; i++)
    {
        if(a[i]==8)
        {
            cnt=0;
            if(a[i-1]==8 || a[i+1]==8) return false;
        }
        else 
        {
            cnt++;
            if(cnt==4) return false;
        }

    }
    return true;
}

int main()
{
    int n; cin >> n;
    bool flag = 1;
    vector<int> a(n+1);
    init(a, n);
    while(flag)
    {
        if(check(a, n))
        {
            for(int i=1; i<=n; i++) cout << a[i];
            cout << endl;
        }
        gen(a, n, flag);
    }
    return 0;
}