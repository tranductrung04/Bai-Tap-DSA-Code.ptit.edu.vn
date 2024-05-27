#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[1005][1005];
int cnt = 0;
int used[1005];
int d[1005]={0};

void DFS(int u)
{
	stack<int> st;
	st.push(u);
	cnt++;
	used[u]=1;
	while(!st.empty())
	{
		u=st.top();
		st.pop();
		for(int v=1; v<=n; v++)
		{
			if(!used[v] && a[u][v])
			{
				used[v]=1;
				cnt++;
				st.push(u);
				st.push(v);
				break;
			}
		}
	}
}

int Euler()
{
	memset(used, 0, sizeof(used));
	cnt=0;
	DFS(1);
	if(cnt<n) return 0;
	int odd=0;
	for(int i=1; i<=n ;i++)
	{
		if(d[i]%2==1) odd++;
	}
	if(odd==0) return 2;
	if(odd==2) return 1;
	return 0;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		memset(a, 0, sizeof(a));
		memset(d, 0, sizeof(d));
		cin >> n >> m;
		while(m--)
		{
			int tmp1, tmp2; cin >> tmp1 >> tmp2;
			a[tmp1][tmp2]=a[tmp2][tmp1]=1;
			d[tmp1]++; d[tmp2]++;
		}
		cout << Euler() << endl;
	}
	return 0;
}
