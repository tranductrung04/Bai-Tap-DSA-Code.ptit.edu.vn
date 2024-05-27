#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		vector<string> ans;	
		int n; cin >> n;
		vector<string> res;
		queue<string> q;
		q.push("6");
		res.push_back("6");
		res.push_back("8");
		q.push("8");
		while(!q.empty() && q.front().size()<n)
		{
			string tmp = q.front();
			q.pop();
			res.push_back(tmp+"6");
			res.push_back(tmp+"8");
			q.push(tmp+"6");
			q.push(tmp+"8");
		}
		for(int i=res.size()-1; i>=0; i--) cout << res[i] << " ";
		cout << endl;
	}
	return 0;
}
