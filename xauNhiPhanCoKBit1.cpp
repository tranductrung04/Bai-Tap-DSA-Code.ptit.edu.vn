#include<bits/stdc++.h>
using namespace std;

void init(int a[], int n)
{
    for(int i=1; i<=n; i++) a[i]=0;
}

void gen(int a[], int n, bool &flag)
{
    int i=n;
    while(i>=1 && a[i]==1) a[i--]=0;
    if(i==0) flag=0;
    else a[i]=1;
}

bool check(int a[], int n, int k)
{
    int cnt = 0;
    for(int i=1; i<=n; i++) if(a[i]) cnt++;
    return cnt == k;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int a[20];
        bool flag = 1;
        init(a, n);
        while(flag)
        {
            if(check(a, n, k)) 
            {
                for(int i=1; i<=n; i++) cout << a[i];
                cout << endl;
            }
            gen(a, n, flag);
        }
    }
    return 0;
}