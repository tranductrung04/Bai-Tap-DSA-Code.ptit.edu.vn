#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;

long long tmp[3][3];

void Mul(long long a[][3], long long b[][3])
{
    long long res[3][3]={0};
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
            for(int h=0; h<2; h++)
            {
                res[i][h] += (a[i][j]*b[j][h])%mod;
                res[i][h] %= mod;
            }
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++) a[i][j] = res[i][j];
}

void Pow(long long a[][3], long long n)
{
    if(n==1) return;
    Pow(a, n/2);
    Mul(a, a);
    if(n%2==1) Mul(a, tmp);
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long a[3][3];
        a[0][0]=a[0][1]=a[1][0]=1;
        a[1][1]=0;
        tmp[0][0]=tmp[0][1]=tmp[1][0]=1;
        tmp[1][1]=0;
        long long n; cin >> n;
        Pow(a, n-1);
        cout << a[0][0] << endl; 
    }
    return 0;
}