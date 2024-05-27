#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		queue<int> q;
		while(n--)
		{
			int num; cin >> num;
			if(num==1) cout << q.size() << endl;
			else if(num == 2) cout << ((q.empty())?"YES":"NO") << endl;
			else if(num == 3) 
			{
				int tmp; cin >> tmp;
				q.push(tmp);
			}
			else if(num == 4)
			{
				if(!q.empty()) q.pop();
			}
			else if(num == 5) 
			{
				if(!q.empty()) cout << q.front() << endl;
				else cout << -1 << endl;
			}
			else if(num == 6)
			{
				if(!q.empty()) cout << q.back() << endl;
				else cout << -1 << endl;
			}
		}
	}
	return 0;
}
