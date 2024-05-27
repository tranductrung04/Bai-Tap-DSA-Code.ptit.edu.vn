#include<bits/stdc++.h>
using namespace std;

int n, m, k;
int a[1005][1005];
int color[1005];
bool flag=0;

bool check(int u, int x)
{
	for(int v=1; v<=n; v++)
	{
		if(a[u][v])
		{
			if(color[v]==x) return false;
		}
	}
	return true;
}

void Try(int i)
{
	if(flag) return;
	for(int j=1; j<=k; j++)
	{
		if(check(i, j)) 
		{
			color[i]=j;
			if(i==n)
			{
				flag=1;
				return;
			}
			else Try(i+1);
			color[i]=0;
		}
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		flag = 0;
		memset(color, 0, sizeof(color));
		memset(a, 0, sizeof(a));
		cin >> n >> m >> k;
		while(m--)
		{
			int tmp1, tmp2; cin >> tmp1 >> tmp2;
			a[tmp1][tmp2]=a[tmp2][tmp1]=1;
		}
		Try(1);
		cout << ((flag)?"YES\n":"NO\n");
	}
	return 0;
}
