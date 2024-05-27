#include<bits/stdc++.h>
using namespace std;

int n, a[35], res=INT_MAX;
long long s;
bool flag = 0;

void Try(int i, long long sum, int cnt)
{
	if(sum == s){ flag = 1; res=min(res, cnt);}
	if(sum > s) return;
	for(int j=i; j<n; j++)
	{
		if(sum + a[j] <= s) Try(j+1, sum+a[j], cnt+1);
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		res = INT_MAX; flag = 0;
		cin >> n >> s;
		for(int i=0; i<n; i++) cin >> a[i];
		Try(0, 0, 0);
		if(flag) cout << res << endl;
		else cout << -1 << endl;
	}
	return 0;
}
