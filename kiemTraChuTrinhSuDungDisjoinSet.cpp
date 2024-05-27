#include<bits/stdc++.h>
using namespace std;

int n, m;
int par[1005];

void init()
{
	for(int i=1; i<=n; i++) par[i]=i;
}

int findRoot(int u)
{
	if(par[u]==u) return u;
	return par[u]=findRoot(par[u]);
}

bool Union(int u, int v)
{
	u=findRoot(u);
	v=findRoot(v);
	if(u==v) return 1;
	par[v]=u;
	return 0;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		bool flag = 0;
		cin >> n >> m;
		init();
		int tmp = m;
		while(tmp--)
		{
			int x, y; cin >> x >> y;
			if(!flag && Union(x, y)) flag = 1;
		}
		cout << ((flag)?"YES\n":"NO\n");
	}
	return 0;
}
