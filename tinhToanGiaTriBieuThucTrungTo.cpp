#include<bits/stdc++.h>
using namespace std;

long long calc(long long a, long long b, char c)
{
	if(c=='*') return a*b;
	if(c=='/') return a/b;
	if(c=='+') return a+b;
	return a-b;
}

int pri(char a)
{
	if(a=='*' || a=='/') return 3;
	if(a=='+' || a=='-') return 2;
	return 1;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		stack<char> st;
		string res="";
		string num="";
		string s; cin >> s;
		for(int i=0; i<s.size(); i++)
		{
			if(s[i]=='(') st.push(s[i]);
			else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
			{
				if(num!="") res += num + " ";
				num="";
				while(!st.empty() && pri(st.top()) >= pri(s[i]))
				{
					res.push_back(st.top());
					st.pop();
				}
				st.push(s[i]);
			}
			else if(s[i]==')')
			{
				if(num!="") res += num + " ";
				num="";	
				while(!st.empty() && st.top()!='(')
				{
					res.push_back(st.top());
					st.pop();	
				}			
				st.pop();
			}
			else num += string(1, s[i]);
		}
		if(num!="") res += num + " ";
		while(!st.empty()) 
		{
			res.push_back(st.top());
			st.pop();
		}
		stack<long long> ans;
		string n="";
		for(int i=0; i<res.size(); i++)
		{
			if(isdigit(res[i])) n.push_back(res[i]);				
			else if(res[i]==' ') 	
			{
				if(n!="") ans.push(stoll(n));
				n="";
			}
			else
			{
				n="";
				long long tmp = ans.top();
				ans.pop();
				tmp = calc(ans.top(), tmp, res[i]);
				ans.pop();
				ans.push(tmp);
			}
		}
		cout << ans.top() << endl;
	}
	return 0;
}
