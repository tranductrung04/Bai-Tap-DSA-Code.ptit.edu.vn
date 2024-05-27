#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[1005][1005];
int used[1005];
int d1[1005];
int d2[1005];
int cnt=0;

//void DFS(int u)
//{
//	stack<int> st;
//	st.push(u);
//	cnt++;
//	used[u]=1;
//	while(!st.empty())
//	{
//		u=st.top();
//		st.pop();
//		for(int v=1; v<=n; v++)
//		{
//			if(!used[v] && a[u][v])
//			{
//				used[v]=1;
//				cnt++;
//				st.push(u);
//				st.push(v);
//				break;
//			}
//		}
//	}
//}

int Euler()
{
//	memset(used, 0, sizeof(used));
//	cnt=0;
//	DFS(1);
//	if(cnt<n) return 0;
	int odd=0;
	for(int i=1; i<=n; i++)
	{
		if(d1[i]!=d2[i]) odd++;
	}
	return !odd;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		memset(a, 0, sizeof(a));
		memset(d1, 0, sizeof(d1));
		memset(d2, 0, sizeof(d2));
		cin >> n >> m;
		while(m--)
		{
			int tmp1, tmp2; cin >> tmp1 >> tmp2;
			a[tmp1][tmp2]=1; 
			d1[tmp1]++;
			d2[tmp2]++;
		}
		cout << Euler() << endl;
	}
	return 0;
}
