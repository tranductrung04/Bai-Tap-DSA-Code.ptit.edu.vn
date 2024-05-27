#include<bits/stdc++.h>
using namespace std;

void solve(string s, stack<string> &st)
{
	stringstream ss(s);
	string token;
	while(ss >> token)
	{
		if(token!="+") st.push(token);		
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s1, s2;
		scanf("\n"); getline(cin, s1);
		scanf("\n"); getline(cin, s2);
		stack<string> st1, st2;
		string res="";
		solve(s1, st1);
		solve(s2, st2);
		while(!st1.empty() && !st2.empty())
		{
			string b1="", b2="";
			int i1 = st1.top().size()-1, i2=st2.top().size()-1;
			while(isdigit(st1.top()[i1])) b1 = string(1, st1.top()[i1--]) + b1; 
			while(isdigit(st2.top()[i2])) b2 = string(1, st2.top()[i2--]) + b2;
			int l1 = stoi(b1), l2=stoi(b2); 
			if(l1==l2) 
			{
				int i=0, j=0;
				string tmp1="", tmp2="";
				while(isdigit(st1.top()[i])) tmp1.push_back(st1.top()[i++]);
				while(isdigit(st2.top()[j])) tmp2.push_back(st2.top()[j++]);
				string tmp = to_string(stoi(tmp1)+stoi(tmp2));
				tmp  += "*x^" + b1;
				res = tmp + " + " + res;
				st1.pop(); st2.pop();
			}
			else if(l1 < l2) { res = st1.top() +" + "+ res; st1.pop();}
			else { res = st2.top() +" + "+ res; st2.pop(); }
		}
		while(!st1.empty())
		{
			res = st1.top() +" + "+ res;
			st1.pop();
		}
		while(!st2.empty())
		{
			res = st2.top() +" + "+ res;
			st2.pop();
		}
		res.erase(res.size()-3);
		cout << res << endl;
	}
	return 0;
}
