#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        map<int, int> m;
        int a[100005];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        int Max = INT_MIN, res;
        for(int i=0; i<n; i++)
        {
            if(Max < m[a[i]]){ Max=m[a[i]]; res = a[i]; }
        }
        if(Max<=(n/2)) cout << "NO" << endl;
        else cout << res << endl;
    }
    return 0;
}