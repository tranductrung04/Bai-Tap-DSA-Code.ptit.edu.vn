#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int s, t; cin >> s >> t;
		queue<int> q;
		int d[100005]={0};
		int u[100005]={0};
		q.push(s);
		u[s]=1;
		while(!q.empty())
		{
		    int top = q.front();
			int cnt = d[q.front()];
			q.pop();
			if(top==t) { d[top]=cnt; break;}
			if(top*2==t) { d[top*2]=cnt+1; break; }
			if(top-1==t) { d[top-1]=cnt+1; break; }
			if(top<t && !u[top*2])
			{
				u[top*2]=1;
				d[top*2]=cnt+1;
				q.push(top*2);
			}
			if(top-1>0 && !u[top-1])
			{
				u[top-1]=1;
				d[top-1]=cnt+1;
				q.push(top-1);
			}
		}			
		cout << d[t] << endl;
	}
	return 0;
}
