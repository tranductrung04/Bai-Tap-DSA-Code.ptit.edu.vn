#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[1005], b[1005];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            b[i]=a[i];
        }
        sort(a, a+n);
        sort(b, b+n, greater<int>());
        int j=0, k=0;
        for(int i=0; i<n; i++)
        {
            if(i%2==0) cout << b[j++] << " ";
            else cout << a[k++] << " ";
        }
        cout << endl;
    }
    return 0;
}