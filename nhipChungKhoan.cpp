#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t; 
	while(t--)
	{
		int n; cin >> n;
		vector<int> a(n), res(n, 0);
		for(int i=0; i<n; i++) cin >> a[i];
		stack<int> st;
		st.push(0);
		res[0]=1;
		for(int i=1; i<n; i++)
		{
			while(!st.empty() && a[st.top()] <= a[i]) st.pop();
			if(st.empty()) res[i]=i+1;
			else res[i]=i-st.top();
			st.push(i);
		}
		for(int i=0; i<n; i++) cout << res[i] << " ";
		cout << endl;
	}
	return 0;
}
