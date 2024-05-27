#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int s[1005], f[1005];
        pair<int, int> p[1005];
        for(int i=0; i<n; i++) cin >> s[i];
        for(int i=0; i<n; i++) cin >> f[i];
        for(int i=0; i<n; i++) p[i] = make_pair(s[i], f[i]);
        sort(p, p+n, cmp);
        int j=0, cnt=1;
        for(int i=1; i<n; i++)
        {
            if(p[i].first>=p[j].second) {j=i; cnt++;}
        }
        cout << cnt << endl;
    }
    return 0;
}