#include<bits/stdc++.h>
using namespace std;

int n, first, last, x[1005][1005], used[1005];
int footprint[1005];

void BFS(int u)
{
	queue<int> q;
	q.push(u); used[u]=1;
	while(!q.empty())
	{
		u = q.front();
		q.pop();
		for(int v=1; v<=n; v++)
		{
			if(!used[v] && x[u][v])
			{
				used[v]=1;
				q.push(v);
				footprint[v]=u;
			}	
		}	
	}	
}

void findPath()
{
	if(footprint[last]==0) cout << -1 << endl;
	else
	{
		vector<int> res;
		int u=last;
		res.push_back(u);
		while(u!=first) {u = footprint[u]; res.push_back(u);}
		reverse(res.begin(), res.end());
		for(auto x : res) cout << x << " ";
		cout << endl;
	}	
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		memset(x, 0, sizeof(x));
		memset(used, 0, sizeof(used));
		memset(footprint, 0, sizeof(footprint));
		int m; cin >> n >> m >> first >> last;
		while(m--)
		{
			int tmp1, tmp2; cin >> tmp1 >> tmp2;
			x[tmp1][tmp2]=x[tmp2][tmp1]=1;
		}
		BFS(first);
		findPath();
	}
	return 0;
}
