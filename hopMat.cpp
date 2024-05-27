#include<bits/stdc++.h>
using namespace std;

int k, n, m;
int pos[105];
set<int> a[1005];
int used[1005]={0};
map<int, int> mp;

void DFS(int u)
{
	mp[u]++;
	used[u]=1;
	for(auto v : a[u])
	{
		if(!used[v])
		{
			used[v]=1;
			DFS(v);
		}
	}
}

void solve()
{
	int cnt = 0;
	for(int i=0; i<k; i++)
	{
		memset(used, 0, sizeof(used));
		DFS(pos[i]);
	}
	for(int i=1; i<=n; i++) 
	{
		if(mp[i]==k) cnt++;		
	}
	cout << cnt << endl;
}

int main()
{
	cin >> k >> n >> m;
	for(int i=0; i<k; i++) cin >> pos[i];
	for(int i=0; i<m; i++)
	{
		int x, y; cin >> x >> y;
		a[x].insert(y);
	}
	solve();
}
