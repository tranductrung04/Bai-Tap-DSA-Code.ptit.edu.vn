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
		pair<int, int> p[100005];
		for(int i=0; i<n; i++)
		{
			int fi, se; cin >> fi >> se;
			p[i] = make_pair(fi, se);
		}
		sort(p, p+n, cmp);
		int cnt = 1, j = 0;
		for(int i=1; i<n; i++)
		{
			if(p[i].first >= p[j].second) { j=i; cnt++; }
		}
		cout << cnt << endl;
	}
	return 0;
}
