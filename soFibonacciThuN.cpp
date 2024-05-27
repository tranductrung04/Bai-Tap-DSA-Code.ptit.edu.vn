#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;

long long b[2][2];

void Mul(long long a[][2], long long c[][2])
{
    long long res[2][2]={0};
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            for(int k=0; k<2; k++)
            {
                res[i][k] += a[i][j]*c[j][k];
                res[i][k] %= mod;
            }
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++) a[i][j]=res[i][j];
    }
}

void Pow(long long a[][2], int n)
{
    if(n==1) return;
    Pow(a, n/2);
    Mul(a, a);
    if(n%2==1) Mul(a, b);
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        if(!n) cout << 0 << endl;
        else if(n==1) cout << 1 << endl;
        else
        {
            long long a[2][2];
            a[0][0]=a[0][1]=a[1][0]=1; a[1][1]=0;
            b[0][0]=b[0][1]=b[1][0]=1; b[1][1]=0;
            Pow(a, n-1);
            cout << a[0][0] << endl;
        }
    }
    return 0;
}
/*
1 1
1 0
*/