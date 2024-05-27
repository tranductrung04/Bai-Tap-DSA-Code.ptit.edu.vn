#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		vector<string> res;
		queue<string> q;
		q.push("6");
		q.push("8");
		res.push_back("6");
		res.push_back("8");
		while(!q.empty() && q.front().size()<n)
		{
			res.push_back(q.front()+"6");
			res.push_back(q.front()+"8");
			q.push(q.front()+"6");
			q.push(q.front()+"8");
			q.pop();		
		}
		cout << res.size() << endl;
		for(int i=res.size()-1; i>=0; i--) cout << res[i] << " ";
		cout << endl;		
	}
	return 0;
}
