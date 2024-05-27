#include<bits/stdc++.h>
using namespace std;

int p[1000000]={0};

void sieve()
{
    p[0]=0; p[1]=0;
    for(int i=2; i<=1000000; i++) p[i]=1;
    for(int i=2; i<=1000; i++)
        for(int j=i*i; j<=1000000; j+=i) p[j]=0;
}

int main()
{
    sieve();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int i=2;
        bool flag = 0;
        while(i<(n/2+1))
        {
            if(p[i] && p[n-i])
            {
                cout << i << " " << n-i << endl;
                flag = 1;
                break;
            }  
            i++;
        }
        if(!flag) cout << -1 << endl;
    }
    return 0;
}