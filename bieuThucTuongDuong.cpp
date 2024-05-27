#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		stack<int> st;
		for(int i=0; i<s.size(); i++)
		{
			if(s[i]=='(') st.push(i);
			else if(s[i]==')')
			{
				if(!st.empty())
				{
					int idx = st.top();
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
		}
		for(int i=0; i<s.size(); i++)
		{
			if(s[i]!='(' && s[i]!=')') cout << s[i];
		}
		cout << endl;
	}
	return 0;
}
