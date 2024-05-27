#include<bits/stdc++.h>
using namespace std;

void Try(vector<int> &a, vector<int> &c, vector<int> &d1, vector<int> &d2, int n, int &cnt, int m)
{
    for(int i=1; i<=n; i++)
    {
        if(c[i] && d1[m-i+n] && d2[m+i-1])
        {
            a[m]=i;
            c[i]=0; d1[m-i+n]=0; d2[m+i-1]=0;
            if(m==n) cnt++;
            else Try(a, c, d1, d2, n, cnt, m+1);
            c[i]=1; d1[m-i+n]=1; d2[m+i-1]=1;
        }
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n+1);
        vector<int> c(n+1, 1);
        vector<int> d1(2*n, 1);
        vector<int> d2(2*n, 1);
        int cnt = 0;
        Try(a, c, d1, d2, n, cnt, 1);
        cout << cnt << endl;
    }
    return 0;
}