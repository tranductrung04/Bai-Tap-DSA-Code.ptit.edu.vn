#include<bits/stdc++.h>
using namespace std;

int n, w; 
int a[105], c[105], x[105]={0};
int fopt=INT_MIN, xopt[105]={0};
    
void Try(int i)
{
    for(int j=1; j>=0; j--)
    {
        x[i]=j;
        int value=0, b=w;
        for(int k=1; k<i; k++) 
        {
            b -= a[k]*x[k];
            value += c[k]*x[k];
        }
        if(b-(a[i]*x[i])<0) continue;
        b -= a[i]*x[i];
        value += c[i]*x[i];
        // double g = value + b*((double)c[i+1]/a[i+1]);
        if(i==n)
        {
            if(value>fopt)
            {
                fopt=value;
                for(int h=1; h<=n; h++) xopt[h]=x[h];
            }
        }
        // else if(g>fopt) Try(i+1);
        else Try(i+1);
    }
}

int main()
{
    cin >> n >> w;
    for(int i=1; i<=n; i++) cin >> c[i];
    for(int i=1; i<=n; i++) cin >> a[i];
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=i+1; j<=n; j++)
    //         if((double)c[i]/a[i]<(double)c[j]/a[j]) 
    //         {
    //             swap(a[i], a[j]); swap(c[i], c[j]);
    //         }
    // }
    Try(1);
    cout << fopt << endl;
    for(int i=1; i<=n; i++) cout << xopt[i] << " "; cout << endl;
    return 0;
}