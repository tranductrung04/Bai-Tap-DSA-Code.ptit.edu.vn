#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[1005][1005];
int used[1005];
bool flag = 0;

void DFS(int u, int tmp)
{
	if(flag) return;
	if(tmp==n)
	{
		flag = 1;
		return;
	}
	for(int v=1; v<=n; v++)
	{
		if(flag) return;
		if(!used[v] && a[u][v])
		{
			used[v]=1;
			DFS(v, tmp+1);
			used[v]=0;
		}
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		memset(a, 0, sizeof(a));
		memset(used, 0, sizeof(used));
		cin >> n >> m;
		while(m--)
		{
			int tmp1, tmp2; cin >> tmp1 >> tmp2;
			a[tmp1][tmp2]=a[tmp2][tmp1]=1;
		}
		flag=0;
		for(int i=1; i<=n; i++)
		{
			if(flag) continue;
			memset(used, 0, sizeof(used));
			used[i]=1;
			DFS(i, 1);
		}
		if(flag) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}
