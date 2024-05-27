#include<bits/stdc++.h>
using namespace std;

int n, cmin=INT_MAX, c[16][16], fopt=INT_MAX;
int x[16], u[16]={0};

void Try(int i)
{
	x[1]=1;
	for(int j=2; j<=n; j++)
	{
		if(!u[j])
		{
			u[j]=1;
			x[i]=j;
			int cost=0, g=0;
			for(int k=1; k<i; k++) cost += c[x[k]][x[k+1]];
			g = cost + cmin*(n-i+1);
			if(i==n)
				fopt = min(fopt, cost+c[x[n]][x[1]]);
			else if(g < fopt) Try(i+1);			
			u[j]=0;
		}
	}
}

int main()
{
	cin >> n;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
		{
			cin >> c[i][j];
			if(c[i][j]) cmin = min(cmin, c[i][j]);
		}
	Try(2);
	cout << fopt << endl;
	return 0;
}