#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		long long n; cin >> n;
		long long cnt=0;
		queue<string> q;
		q.push("1");
		if(1<=n) cnt++;
		while(!q.empty() && q.front().size()<19)
		{
			string tmp = q.front();
			q.pop();
			if(stoll(tmp+"0")>n) break;
			cnt++;
			if(stoll(tmp+"1")>n) break;
			cnt++;
			q.push(tmp+"0");
			q.push(tmp+"1");
		}
		cout << cnt << endl;
	}
	return 0;
}
