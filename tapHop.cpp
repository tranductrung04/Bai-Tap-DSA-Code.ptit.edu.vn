#include<bits/stdc++.h>
using namespace std;

void init(vector<int> &a, int k)
{
    for(int i=0; i<k; i++) a[i]=i+1;
}

void gen(vector<int> &a, int n, int k, bool &flag)
{
    int i=k-1;
    while(i>=0 && a[i]==n-k+i+1) i--;
    if(i==-1) flag = 0;
    else
    {
        a[i]++;
        for(int j=i+1; j<k; j++) a[j]=a[i]+j-i;
    }
}

bool check(vector<int> a, int s)
{
    int res = 0;
    for(int x : a) res += x;
    return res==s; 
}

int main()
{
    while(1)
    {
        int n, k, s; cin >> n >> k >> s;
        if(n<k || s<k)
        {
            cout << 0 << endl;
            continue;
        }
        if(!n && !k && !s) break;
        int cnt = 0;
        vector<int> a(k);
        init(a, k);
        bool flag = 1;
        while(flag)
        {
            if(check(a, s)) cnt++;
            gen(a, n, k, flag);
        }
        cout << cnt << endl;
    }
    return 0;
}