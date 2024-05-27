#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		stack<string> res;
		for(int i=0; i<s.size(); i++)
		{
			if(s[i]!=']') res.push(string(1, s[i]));
			else 
			{
				string tmp = res.top();
				res.pop();
				while(!res.empty() && res.top()!="[") 
				{
					tmp = res.top()+tmp;
					res.pop();					
				}
				if(!res.empty()) res.pop();
				string n="";
				while(!res.empty() && isdigit(res.top()[0]))
				{
					n = res.top() + n;
					res.pop();
				}
				if(n=="") n="1";
				int cnt = stoi(n);
				string tmp2="";
				while(cnt--) tmp2 += tmp;
				res.push(tmp2);
			}
		}
		string ans = "";
		while(!res.empty())
		{
			ans = res.top()+ans;
			res.pop();
		}
		cout << ans << endl;
	}
	return 0;
}
