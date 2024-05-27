#include<bits/stdc++.h>
using namespace std;

int n;
int a[105][105];

int solve(pair<int, int> s, pair<int, int> e)
{
	queue<pair<pair<int, int>, int>> q;
	set<pair<int, int>> se;
	q.push({s, 0});
	se.insert(s);
	while(!q.empty())
	{
		pair<pair<int, int>, int> top = q.front();
		q.pop();
		if(top.first == e) return top.second;
		int i=top.first.first, j=top.first.second;
 		for(int i1=i; i1<n; i1++)
		{
			if(a[i1][j]==0) break;
			if(se.find({i1, j})==se.end())
			{
				se.insert({i1, j});
				if(i1==e.first && j==e.second) return top.second+1;
				q.push({{i1, j} ,top.second+1});
			}
		}
		for(int i1=i; i1>=0; i1--)
		{
			if(a[i1][j]==0) break;
			if(se.find({i1, j})==se.end())
			{
				se.insert({i1, j});
				if(i1==e.first && j==e.second) return top.second+1;
				q.push({{i1, j} ,top.second+1});
			}
		}
		for(int j1=j; j1<n; j1++)
		{
			if(a[i][j1]==0) break;
			if(se.find({i, j1})==se.end())
			{
				se.insert({i, j1});
				if(i==e.first && j1==e.second) return top.second+1;
				q.push({{i, j1} ,top.second+1});
			}
		}
		for(int j1=j; j1>=0; j1--)
		{
			if(a[i][j1]==0) break;
			if(se.find({i, j1})==se.end())
			{
				se.insert({i, j1});
				if(i==e.first && j1==e.second) return top.second+1;
				q.push({{i, j1} ,top.second+1});
			}
		}
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		memset(a, 0, sizeof(a));
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				char tmp; cin >> tmp;
				if(tmp=='.') a[i][j]=1;
				else a[i][j]=0;
			}
		}
		pair<int, int> s, e;
		cin >> s.first >> s.second >> e.first >> e.second;
		cout << solve(s, e) << endl;
	}
	return 0;
}
