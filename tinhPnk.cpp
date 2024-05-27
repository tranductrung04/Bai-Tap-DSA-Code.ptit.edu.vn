#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;

long long a[1005][1005]={0};

void permutation()
{
    for(int i=0; i<1001; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(j==0) a[i][j] = 1;
            else
            {
                a[i][j] = a[i-1][j] + j*a[i-1][j-1]%mod;
                a[i][j] %= mod;
            }
        }
    }
}

int main()
{
    permutation();
    int t; cin >> t;
    while(t--)
    {
        long long n, k; 
        cin >> n >> k;
        cout << a[n][k] << endl;
    }
    return 0;
}