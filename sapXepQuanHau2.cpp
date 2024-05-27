#include<bits/stdc++.h>
using namespace std;

int a[10][10], m[100]={0};
int c[10]={0}, d1[20]={0}, d2[20]={0};
int res=0;

void Try(int i)
{
    for(int j=0; j<8; j++)
    {
        if(!c[j] && !d1[i-j+7] && !d2[i+j])
        {
            c[j]=1; d1[i-j+7]=1; d2[i+j]=1;
            m[i]=j;
            if(i==7)
            {  
                int sum = 0;
                for(int k=0; k<8; k++) sum += a[k][m[k]];
                res = max(res, sum);
            }
            else Try(i+1);
            c[j]=0; d1[i-j+7]=0; d2[i+j]=0;
        }
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        memset(m, 0, sizeof(m));
        res = 0;
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++) cin >> a[i][j];
        }
        Try(0);
        cout << res << endl;
    }
}