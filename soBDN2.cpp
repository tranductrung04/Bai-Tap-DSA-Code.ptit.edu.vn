#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<string> res;
	queue<string> q;
	q.push("1");
	res.push_back("1");
	while(!q.empty() && q.front().size()<19)
	{
		string tmp = q.front();
		q.pop();
		res.push_back(tmp+"0");
		res.push_back(tmp+"1");
		q.push(tmp+"0");
		q.push(tmp+"1");
	}
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		for(int i=0; i<1e6; i++)
		{
			if(stoll(res[i])%n==0)
			{
				cout << res[i] << endl;
				break;		
			}		
		}		
	}
	return 0;
}
