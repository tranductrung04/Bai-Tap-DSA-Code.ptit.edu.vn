#include<bits/stdc++.h>
using namespace std;

int a[100005];
int n, k; 
		
int binarySearch()
{
	int l=0, r=n-1;
	while(l<=r)
	{
		int m = (l+r)/2;
		if(a[m]==k) return m+1;
		else if(a[m]<k) l=m+1;
		else r=m-1;
	}
	return -1;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> k;
		for(int i=0; i<n; i++) cin >> a[i];
		int res = binarySearch();
		if(res == -1) cout << "NO" << endl;
		else cout << res << endl;
	}
	return 0;
}
