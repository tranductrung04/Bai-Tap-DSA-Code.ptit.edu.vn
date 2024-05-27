#include<bits/stdc++.h>
using namespace std;

string convert(string s)
{
	stack<int> st;
	string res = "";
	for(int i=0; i<s.size(); i++)
	{
		if(s[i]=='(') st.push(i);
		else if(s[i]==')')
		{
			int idx=st.top();
			st.pop();
			if(idx!=0 && s[idx-1]=='-')
			{
				for(int j=idx; j<=i; j++)
				{
					if(s[j]=='+') s[j]='-';
					else if(s[j]=='-') s[j]='+';
				}
			}
		}
	}
	for(int i=0; i<s.size(); i++)
		if(s[i]!='(' && s[i]!=')') res.push_back(s[i]);
	return res;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string p1, p2; cin >> p1 >> p2;
		p1 = convert(p1);
		p2 = convert(p2);
		cout << ((p1==p2)?"YES":"NO") << endl;
	}
	return 0;
}
