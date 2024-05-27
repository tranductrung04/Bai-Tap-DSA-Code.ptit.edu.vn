#include<bits/stdc++.h>
using namespace std;

int a[1005][1005];
int used[1005];
int n, m;

bool DFS(int u)
{
	used[u]=1;
	for(int v=1; v<=n; v++)
	{
		if(a[u][v])
		{
			if(used[v]) return true;
			else if(DFS(v)) return true;
			break;
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
			a[tmp1][tmp2]=1;
		}
		bool flag = 0;
		for(int i=1; i<=n; i++)
		{
			memset(used, 0, sizeof(used));
			if(DFS(i)) 
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
