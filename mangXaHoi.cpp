#include<bits/stdc++.h>
using namespace std;

int n, m;
set<int> a[100005];
int used[100005];
int cnt;

void DFS(int u)
{
	used[u]=1;
	for(auto v : a[u])
	{
		if(!used[v])
		{
			cnt++;
			DFS(v);
		}
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		memset(used, 0, sizeof(used));
		cnt=1;
		cin >> n >> m;
		while(m--)
		{
			int x, y; cin >> x >> y;
			a[x].insert(y);
			a[y].insert(x);
		}
		bool flag = 0;
		for(int i=1; i<=n; i++)
		{
			if(used[i] || flag) continue;
			cnt=1;
			DFS(i);
			if(cnt==n) flag=1;
		}
		cout << ((flag)?"YES\n":"NO\n");
		for(int i=0; i<100005; i++) a[i].clear();
	}
	return 0;
}
