#include<bits/stdc++.h>
using namespace std;

int solve(int n)
{
	set<int> se;
	queue<pair<int, int>> q;
	q.push({n, 0});
	se.insert(n);
	while(!q.empty())
	{
		pair<int, int> top = q.front();
		q.pop();
		if(top.first==1) return top.second;
		if(top.first-1==1) return top.second+1;
		for(int i=2; i<=sqrt(top.first); i++) 
		{
			if(top.first%i==0 && se.find(top.first/i)==se.end())
			{
				se.insert(top.first/i);
				q.push({top.first/i, top.second+1});
			}			
		}
		if(top.first-1>0 && se.find(top.first-1)==se.end())
		{
			se.insert(top.first-1);
			q.push({top.first-1, top.second+1});
		}
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		cout << solve(n) << endl;
	}
	return 0;
}
