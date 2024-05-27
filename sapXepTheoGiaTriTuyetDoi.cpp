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
        int n, x, a[100005];
        pair<int, int> p[100005];
        cin >> n >> x;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            p[i] = make_pair(a[i], abs(a[i]-x));
        }
        stable_sort(p, p+n, cmp);
        for(int i=0; i<n; i++) cout << p[i].first << " ";
        cout << endl;
    }
    return 0;
}