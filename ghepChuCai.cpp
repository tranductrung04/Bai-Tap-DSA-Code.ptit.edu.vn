#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> &a, int n)
{
    for(int i=1; i<=n; i++)
    {
        if(a[i]==1 || a[i]==5)
        {
            if(a[i-1]!=1 && a[i-1]!=5 && a[i+1]!=1 && a[i+1]!=5 && a[i-1]!=0 && a[i+1]!=0)
            return false;
        } 
    }
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
                    for(int i=1; i<=n; i++) cout << (char)(a[i]+64);
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
    char c; cin >> c;
    int n = c - 'A' + 1;
    vector<int> a(9, 0);
    vector<int> u(n+1, 1);
    Try(a, u, n, 1);
    return 0;
}