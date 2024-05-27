#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		stack<char> st;
		string s; cin >> s;
		int cnt=0;
		for(int i=0; i<s.size(); i++) 
		{
			if(s[i]=='(') st.push(s[i]);
			else if(!st.empty()) { st.pop(); cnt++; }
		}
		cout << cnt*2 << endl;
	}
	return 0;
}
