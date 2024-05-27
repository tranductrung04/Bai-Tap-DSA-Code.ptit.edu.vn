#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> &a, int n)
{
    for(int i=1; i<n; i++) if(abs(a[i+1]-a[i])==1) return false;
    return true;
}

void Try(vector<int> &a, vector<int> &u, int n, int m)
{
    for(int i=1; i<=n; i++)
    {
        if(u[i])
        {
            a[m]=i;
            u[i]=0;
            if(m==n)
            {
                if(check(a, n))
                {
                    for(int i=1; i<=n; i++) cout << a[i];
                    cout << endl;
                }
            }
            else Try(a, u, n, m+1);
            u[i]=1;
        }
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n+1, 0);
        vector<int> u(n+1, 1);
        Try(a, u, n, 1);
    }
    return 0;
}