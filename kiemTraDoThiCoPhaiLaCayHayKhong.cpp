#include<bits/stdc++.h>
using namespace std;

int par[1005];
int n;

void init()
{
	for(int i=1; i<=n; i++) par[i]=i;
}

int findRoot(int u)
{
	if(par[u]==u) return u;
	return par[u]=findRoot(par[u]);
}

int Union(int u, int v)
{
	u = findRoot(u);
	v = findRoot(v);
	if(u==v) return 0;
	par[v]=u;
	return 1;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		init();
		bool flag = 1;
		for(int i=0; i<n-1; i++)
		{
			int x, y; cin >> x >> y;
			if(flag && !Union(x, y)) flag=0;
		}
		cout << (flag?"YES":"NO") << endl;
	}	
	return 0;
}
