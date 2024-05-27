#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int x, y, z; cin >> x >> y >> z;
		string a, b, c; cin >> a >> b >> c;
		int sa=a.size(), sb=b.size(), sc=c.size();
		int dp[sa+1][sb+1][sc+1];
		for(int i=0; i<=sa; i++)
		{
			for(int j=0; j<=sb; j++)
			{
				for(int k=0; k<=sc; k++)
				{
					if(!i || !j || !k) dp[i][j][k]=0;
					else if(a[i-1]==b[j-1] && b[j-1]==c[k-1]) 
						dp[i][j][k]=dp[i-1][j-1][k-1]+1;	
					else dp[i][j][k]=max(dp[i][j-1][k], max(dp[i-1][j][k], dp[i][j][k-1]));
				}
			}			
		}
		cout << dp[sa][sb][sc] << endl;		
	}
	return 0;
}
