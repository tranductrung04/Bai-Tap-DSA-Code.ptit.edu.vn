#include<bits/stdc++.h>
using namespace std;

int a[1005][1005];
int n, m;

int solve()
{
	queue<pair<pair<int, int>, int>> q;
	set<pair<int, int>> se;
	se.insert({0, 0});
	q.push({{0, 0}, 0});
	while(!q.empty())
	{
		pair<pair<int, int>, int> top = q.front();
		q.pop();
		if(top.first.first==n-1 && top.first.second==m-1) return top.second;
		if(top.first.first+a[top.first.first][top.first.second]<n && se.find({top.first.first+a[top.first.first][top.first.second], top.first.second})==se.end())
		{
			int pos1 = top.first.first+a[top.first.first][top.first.second];
			se.insert({pos1, top.first.second});
			if(pos1 == n-1 && top.first.second==m-1) return top.second+1;
			q.push({{pos1, top.first.second}, top.second+1});
		}
		if(top.first.second + a[top.first.first][top.first.second]<m && se.find({top.first.first,top.first.second + a[top.first.first][top.first.second]})==se.end())
		{
			int pos2 = top.first.second + a[top.first.first][top.first.second];
			se.insert({top.first.first, pos2});
			if(pos2 == m-1 && top.first.first==n-1) return top.second+1;
			q.push({{top.first.first, pos2}, top.second+1});
		}
	}
	return -1;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> m;
		memset(a, 0, sizeof(a));
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++) cin >> a[i][j];
		}
		cout << solve() <<  endl;
	}
	return 0;
}
