#include<bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>> s, vector<vector<int>> e)
{
	set<vector<vector<int>>> se;
	queue<pair<vector<vector<int>>, int>> q;
	q.push({s, 0});
	se.insert(s);
	while(!q.empty())
	{
		pair<vector<vector<int>>, int> top = q.front();
		q.pop();
		if(top.first==e) return top.second;
		vector<vector<int>> tmp1(2, vector<int>(3));
		vector<vector<int>> tmp2(2, vector<int>(3));
		tmp1[0][0] = top.first[0][0];
		tmp1[1][0] = top.first[1][0];
		tmp1[0][1] = top.first[1][1];
		tmp1[1][1] = top.first[1][2];
		tmp1[1][2] = top.first[0][2];
		tmp1[0][2] = top.first[0][1];
		if(se.find(tmp1)==se.end())
		{
			se.insert(tmp1);
			if(tmp1==e) return top.second+1;
			q.push({tmp1, top.second+1});			
		}
		tmp2[0][2] = top.first[0][2];
		tmp2[1][2] = top.first[1][2];
		tmp2[0][0] = top.first[1][0];
		tmp2[0][1] = top.first[0][0];
		tmp2[1][0] = top.first[1][1];
		tmp2[1][1] = top.first[0][1];
		if(se.find(tmp2)==se.end())
		{
			se.insert(tmp2);
			if(tmp2==e) return top.second+1;
			q.push({tmp2, top.second+1});			
		}
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		vector<vector<int>> s(2, vector<int>(3)), e(2, vector<int>(3));
		for(int i=0; i<2; i++)
		{
			for(int j=0; j<3; j++) cin >> s[i][j];
		}
		for(int i=0; i<2; i++)
		{
			for(int j=0; j<3; j++) cin >> e[i][j];
		}
		cout << solve(s, e) << endl;
	}
	return 0;
}
