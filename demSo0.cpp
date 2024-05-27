#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[1005];
		for(int i=0; i<n; i++) cin >> a[i];
		int j=0, cnt=0;
		while(!a[j] && j<n){ cnt++; j++; }
		cout << cnt << endl;		
	}
	return 0;
}
