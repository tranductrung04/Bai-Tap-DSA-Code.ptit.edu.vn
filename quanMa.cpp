#include<bits/stdc++.h>
using namespace std;

int atd(char c)
{
	if(c=='a') return 1;
	if(c=='b') return 2;
	if(c=='c') return 3;
	if(c=='d') return 4;
	if(c=='e') return 5;
	if(c=='f') return 6;
	if(c=='g') return 7;
	return 8;
}

int d[1005][1005];
int u[1005][1005];
int dx[8]={-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8]={1, -1, 2, -2, 2, -2, -1, 1};

int solve(string st, string en)
{
		queue<pair<int, int>> q;
		pair<int, int> start, end;
		start.first=atd(st[0]); start.second = st[1]-'0';
		end.first=atd(en[0]); end.second = en[1]-'0';
		q.push(start);	
		while(!q.empty())
		{
			pair<int, int> top = q.front();
			q.pop();
			int i = top.first;
			int j = top.second;
			if(i==end.first && j==end.second) return d[i][j];
			for(int k=0; k<8; k++)
			{
				int i1=i+dx[k];
				int j1=j+dy[k];
				if(i1<=8 && i1>=1 && j1<=8 && j1>=1 && !u[i1][j1])
				{
					u[i1][j1]=1;
					d[i1][j1]=d[i][j]+1;
					if(i1==end.first && j1==end.second) return d[i1][j1];
					q.push({i1, j1});
				}
			}
		}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		memset(d, 0, sizeof(d));
		memset(u, 0, sizeof(u));
		string st, en; cin >> st >> en;
		cout << solve(st, en) << endl;
	}
	return 0;
}
