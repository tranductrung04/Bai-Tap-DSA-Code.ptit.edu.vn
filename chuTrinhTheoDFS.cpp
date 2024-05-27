#include<bits/stdc++.h>
using namespace std;

int n, m; 
int a[1005][1005];
int used[1005];
bool flag = 0;
string ans;

void DFS(int u, int p, string tmp)
{
	if(flag) return;
	used[u]=1;
	for(int v=1; v<=n; v++)
	{
		if(flag) return;
		if(a[u][v])
		{
			if(!used[v])
			{ 
				DFS(v, u, tmp+" "+to_string(v));
			}
			else if(v!=p && v==1)
			{
				tmp += " " + to_string(v);
				ans = tmp;
				flag = 1;
				return;
			} 
		}
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		flag=0;
		ans = "";
		memset(a, 0, sizeof(a));
		memset(used, 0, sizeof(used));
		cin >> n >> m;
		while(m--)
		{
			int tmp1, tmp2; cin >> tmp1 >> tmp2;
			a[tmp1][tmp2]=a[tmp2][tmp1]=1;
		}
		DFS(1, 0, "1");
		if(flag) cout << ans << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
