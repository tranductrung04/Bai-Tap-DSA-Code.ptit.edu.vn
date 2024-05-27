#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	long long a[100005];
	for(int i=0; i<n; i++) cin >> a[i];
	sort(a, a+n);
	long long res = LLONG_MIN;
	long long ans2 = a[n-1]*a[n-2];
	if(a[n-3]>0) ans2 *= a[n-3];
	if(a[0]<0 && a[1]<0)
	{
		long long ans1 = a[0]*a[1];
		if(a[n-1]>0) ans1 *= a[n-1];
		res = max(ans1, ans2);
	}
	res = max(res, ans2);
	cout << res << endl;
	return 0;
}
