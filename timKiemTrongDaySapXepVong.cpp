#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, x; cin >> n >> x;
		int a[n+1];
		for(int i=0; i<n; i++) cin >> a[i];
		int j=0;
		while(a[j]<a[j+1]) j++;
		j++;
		int pos = lower_bound(a, a+j+1, x)-a;
		if(a[pos]!=x)
		{
			pos = lower_bound(a+j+1, a+n, x)-a;	
		}
		cout << pos+1 << endl;
	}
	return 0;
}
