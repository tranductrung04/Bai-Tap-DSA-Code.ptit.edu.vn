#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[55], b[55];
        bool flag = 1;
        for(int i=0; i<n; i++)
        {
            cin >> a[i]; b[i]=a[i];
        }
        sort(b, b+n);
        for(int i=0; i<n; i++)
        {
            if(a[i]!=b[i] && a[i]!=b[n-i-1]) flag = 0;
        }
        if(!flag) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}