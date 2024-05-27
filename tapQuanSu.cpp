#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        vector<int> a(k);
        set<int> s;
        for(int i=0; i<k; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        int cnt = 0;
        int m=k-1;
        while(m>=0 && a[m]==n-k+m+1) m--;
        if(m==-1) cnt = 4;
        else
        {
            a[m]++;
            for(int j=m+1; j<k; j++) a[j] = a[m]+j-m;
            for(int i : a) if(!s.count(i)) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}