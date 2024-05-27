#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[1005];
        int b[1005];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            b[i]=a[i];
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<i; j++) 
            {
                if(a[j]<a[i]) b[i]=max(a[i]+b[j], b[i]); 
            }
        }
        cout << *max_element(b, b+n) << endl;
    }
    return 0;
}