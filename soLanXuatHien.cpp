#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, x; cin >> n >> x;
        int a[1005];
        map<int, int> m;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        if(!m[x]) cout << -1;
        else cout << m[x];
        cout << endl;
    }
    return 0;
}