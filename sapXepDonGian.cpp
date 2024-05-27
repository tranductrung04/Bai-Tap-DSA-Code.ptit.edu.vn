#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int cnt = 0;
	int a[100005], lis[100005]={0};
	for(int i=0; i<n; i++) cin >> a[i];
	int max_len = INT_MIN;
	for(int i=0; i<n; i++)
	{
		lis[a[i]] = lis[a[i]-1] + 1;
		max_len = max(max_len, lis[a[i]]);
	}
	cout << n - max_len << endl;
	return 0;
}
