#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;

long long a[1005][1005];

void combination()
{
    for(int i=0; i<=1001; i++)
        for(int j=0; j<=i; j++)
        {
            if(j!=0 && j!=i) { a[i][j] = a[i-1][j-1] + a[i-1][j]; a[i][j] %= mod; } 
            else a[i][j]=1;
        }
}

int main()
{
    combination();
    int t; cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        cout << a[n][k] << endl;
    }
    return 0;
}