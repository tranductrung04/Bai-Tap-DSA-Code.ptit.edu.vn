#include<bits/stdc++.h>
using namespace std;

set<int> child[200005];
long long a[200005]={0};

int DFS(int u)
{
	int sz = 0;
	for(auto v : child[u])
	{
		sz += DFS(v);
		a[u] += a[v];
	}
	a[u] += (long long) sz+1;
	return sz+1;
}

int main()
{
	int n;
	cin >> n;
	for(int i=2; i<=n; i++)
	{
		int tmp; cin >> tmp;
		child[tmp].insert(i);
	}
	int mtp  = DFS(1);
	for(int i=1; i<=n; i++) cout << a[i] << " ";
	cout << endl;
	return 0;
}
