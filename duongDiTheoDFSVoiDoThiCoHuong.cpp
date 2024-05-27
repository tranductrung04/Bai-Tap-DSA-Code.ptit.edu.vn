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

void findPath()
{
	if(footprint[last]==0) cout << -1 << endl;
	else
	{
		vector<int> res;
		int u=last;
		res.push_back(u);
		while(u!=first) {u=footprint[u]; res.push_back(u);}
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
		int m; cin >> n >> m >> first >> last;
		memset(x, 0, sizeof(x));
		memset(used, 0, sizeof(used));
		memset(footprint, 0, sizeof(footprint));
		while(m--)
		{
			int tmp1, tmp2; cin >> tmp1 >> tmp2;
			x[tmp1][tmp2]=1;
		}
		DFS(first);
		findPath();
	}
}
