#include<bits/stdc++.h> 
using namespace std;

int main() 
{
	string s; getline(cin, s); 
	stack<char> st; 
	string res = ""; 
	for (char c : s)
	{
		if (isalpha(c)|| isdigit(c)) res.push_back(c); 
		else if (c == '<') 
		{ 
		    if (res.size())
		    { 
			    st.push(res.back()); res.pop_back();
			}
		} 
		else if (c == '>') 
		{ 
		    if (!st.empty())
		    {
			    res.push_back(st.top()); st.pop();
		    } 
		} 
		else if (c == '-')
		{
			if (res.size()) res.pop_back(); 
		} 
	} 
	while (!st.empty()) 
	{
	    res.push_back(st.top()); 
		st.pop();
	} 
	cout << res << endl; 
}
