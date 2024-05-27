#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		vector<int> a(n);
		for(int i=0; i<n; i++) cin >> a[i];
		stack<int> st;
		int j=0, res=0, idx, tmp;
		while(j<n)
		{
			if(st.empty() || a[st.top()] <= a[j]) st.push(j++);
			else 
			{
				idx = st.top();
				st.pop();
				tmp = 0;
				if(st.empty()) {if(a[idx]<=j) tmp = a[idx];}
				else if(a[idx]<=j-st.top()-1) tmp = a[idx];
				res = max(res, tmp);
			}
		}
		while(!st.empty())
		{
			idx = st.top();
			st.pop();
			tmp = 0;
			if(st.empty()) {if(a[idx]<=j) tmp = a[idx];}
			else if(a[idx]<=j-st.top()-1) tmp = a[idx];
			res = max(res, tmp);
		}
		cout << res << endl;
	}
	return 0;
}
