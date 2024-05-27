#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		vector<int> a(n), res(n, 0);
		map<int, int> mp;
		for(int &x : a) { cin >> x; mp[x]++; } 
		stack<int> st;
		res[n-1]=-1;
		st.push(a[n-1]);
		for(int i=n-2; i>=0; i--)
		{
			while(!st.empty() && mp[st.top()] <= mp[a[i]])
			{
				st.pop();
			}
			if(st.empty()) res[i]=-1;
			else res[i]=st.top();
			st.push(a[i]);
		}
		for(int i=0; i<n; i++) cout << res[i] << " ";
		cout << endl;
	}
	return 0;
}
