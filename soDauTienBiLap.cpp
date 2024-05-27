#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[100005], res;
        bool flag = 0;
        map<int, int> m;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        for(int i=0; i<n; i++)
            if(m[a[i]]>1) {res = a[i]; flag=1; break;}
        if(!flag) cout << "NO" << endl;
        else cout << res << endl;
    }
    return 0;
}