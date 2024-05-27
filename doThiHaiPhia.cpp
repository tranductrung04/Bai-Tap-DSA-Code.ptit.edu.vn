#include<bits/stdc++.h>
using namespace std;

int n, m;
set<int> a[1005];
int used[1005];

bool DFS(int u, int p)
{
	used[u]=1;
	for(auto v : a[u])
	{
		if(!used[v])
		{
			if(DFS(v, u)) return true;
		}
		else if(v!=p) return true;
	}
	return false;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		memset(used, 0, sizeof(used));
		cin >> n >> m;
		while(m--)
		{
			int x, y; cin >> x >> y;
			a[x].insert(y);
			a[y].insert(x);
		}
		bool flag=1;
		for(int i=1; i<=n; i++)
		{
			if(!flag) continue;
			memset(used, 0, sizeof(used));
			if(DFS(i, 0)) flag=0;
		}
		cout << ((flag)?"YES":"NO") << endl;
		for(int i=0; i<1005; i++) a[i].clear();
	}
	return 0;
}
