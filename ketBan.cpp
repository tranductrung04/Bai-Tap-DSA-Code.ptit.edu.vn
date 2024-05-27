#include<bits/stdc++.h>
using namespace std;

int n, m;
int used[100005];
set<int> a[100005];
int cnt;

void BFS(int u)
{
	queue<int> q;
	q.push(u);
	used[u]=1;
	cnt++;
	while(!q.empty())
	{
		int v = q.front();
		q.pop();
		for(auto x : a[v]) 
		{
			if(!used[x])
			{
				used[x]=1;
				cnt++;
				q.push(x);
			}
		}	
	}		
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cnt=0;
		memset(used, 0, sizeof(used));
		cin >> n >> m;
		while(m--)
		{
			int x, y; cin >> x >> y;
			a[x].insert(y);
			a[y].insert(x);
		}
		int res = 0;
		for(int i=1; i<=n; i++)
		{
			if(used[i]) continue;
			cnt=0;
			BFS(i);
			res=max(res, cnt);
		}
		cout << res << endl;
		for(int i=0; i<100005; i++) a[i].clear();
	}
	return 0;
}
