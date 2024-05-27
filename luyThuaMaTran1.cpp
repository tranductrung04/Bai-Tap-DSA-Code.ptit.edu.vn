#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;

long long n;
long long b[15][15];

void Mul(long long a[][15], long long m[][15])
{
    long long res[15][15]={0};
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            for(int h=0; h<n; h++)
            {
                res[i][h] += (a[i][j]*m[j][h])%mod;
                res[i][h] %= mod;
            }
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++) a[i][j] = res[i][j];
}

void Pow(long long a[][15], long long k)
{
    if(k==1) return;
    Pow(a, k/2);
    Mul(a, a);
    if(k%2==1) Mul(a, b);
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long k; cin >> n >> k;
        long long a[15][15];
        memset(b, 0, sizeof(b));
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++) {cin >> a[i][j], b[i][j]=a[i][j];}
        Pow(a, k);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++) cout << a[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}