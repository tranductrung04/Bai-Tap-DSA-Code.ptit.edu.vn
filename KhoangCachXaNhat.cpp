#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; 
        int a[100005];
        pair<int, int> p[100005];
		for(int i=0; i<n; i++)
		{
			cin >> a[i];	
			p[i] = make_pair(a[i], i);
		} 
        sort(p, p+n, cmp);
		int pos=p[0].second, res=INT_MIN;
        for(int i=1; i<n; i++)
        {
            res = max(p[i].second-pos, res);
            pos = min(p[i].second, pos);
        }
        cout << res << endl;
    }
    return 0;
}
