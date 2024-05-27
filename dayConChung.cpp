#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, m, k; cin >> n >> m >> k;
		int a[100005], b[100005], c[100005];
		bool flag = 0;
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<m; i++) cin >> b[i];
		for(int i=0; i<k; i++) cin >> c[i];
		int x, y, z; x=y=z=0;
		while(x<n && y<m && z<k)
		{
			if(a[x]==b[y] && b[y]==c[z]) 
			{ 
				cout << a[x] << " "; flag = 1;
				x++; y++; z++;
			}
			else if(a[x]<b[y]) x++;
			else if(b[y]<c[z]) y++;
			else z++;
		}
		if(!flag) cout << "NO";
		cout << endl;
	}
	return 0;
}
