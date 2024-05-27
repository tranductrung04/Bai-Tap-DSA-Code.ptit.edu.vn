#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	return a.second > b.second;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		pair<int, int> p[1005];
		bitset<1005> bs;
		for(int i=0; i<n; i++)
		{
			int code, dl, prof; cin >> code >> dl >> prof;
			p[i] = make_pair(dl, prof);
		}
		sort(p, p+n, cmp);
		long long cnt=0, res=0;
		for(int i=0; i<n; i++)
		{
			while(bs[p[i].first] && p[i].first) p[i].first--;
			if(!bs[p[i].first] && p[i].first)
			{
				cnt++;
				res += p[i].second;
				bs[p[i].first]=1;
			}
		}		
		cout << cnt << " " << (long long)res << endl;
	}
	return 0;
}