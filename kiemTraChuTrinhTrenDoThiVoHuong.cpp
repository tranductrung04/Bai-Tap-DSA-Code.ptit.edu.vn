#include<bits/stdc++.h>
using namespace std;

int a[1005][1005];
int used[1005];
int n, m;

bool DFS(int u, int p)
{
	used[u]=1;
	for(int v=1; v<=n; v++)
	{
		if(a[u][v])
		{
			if(!used[v])
			{
				if(DFS(v, u)) return true;
			}
			else if(v!=p) return true;
		}
	}
	return false;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		memset(a, 0, sizeof(a));
		cin >> n >> m;
		while(m--)
		{
			int tmp1, tmp2; cin >> tmp1 >> tmp2;
			a[tmp1][tmp2]=a[tmp2][tmp1]=1;
		}
		bool flag = 0;
		for(int i=1; i<=n; i++)
		{
			memset(used, 0, sizeof(used));
			if(DFS(i, 0)) 
			{
				cout << "YES" << endl;
				flag = 1;
				break;			
			}			
		}
		if(!flag) cout << "NO" << endl;
	}
	return 0;
}
