#include<bits/stdc++.h>
using namespace std;

int n, first, last, x[1005][1005], used[1005];
int footprint[1005];

void DFS(int u)
{
	stack<int> st;
	st.push(u); used[u]=1;
	while(!st.empty())
	{
		u = st.top();
		st.pop();
		for(int v=1; v<=n; v++)
		{
			if(!used[v] && x[u][v])
			{
				used[v]=1;
				st.push(u);
				st.push(v);
				footprint[v]=u;
				break;
			}
		}
	}
}

bool findPath()
{
	return footprint[last]!=0;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int m; cin >> n >> m;
		memset(x, 0, sizeof(x));
		while(m--)
		{
			int tmp1, tmp2; cin >> tmp1 >> tmp2;
			x[tmp1][tmp2]=x[tmp2][tmp1]=1;
		}
		int q; cin >> q;
		while(q--)
		{
			for(int i=0; i<=n; i++)
			{
				used[i]=0;
				footprint[i]=0;
			}
			cin >> first >> last;
			DFS(first);
			cout << ((findPath())?"YES":"NO") << endl;
		}
	}
}
