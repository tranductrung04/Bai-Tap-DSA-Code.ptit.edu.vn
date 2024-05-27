#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int a[n+1];
	for(int i=0; i<n; i++) cin >> a[i];
	map<int, int> mp;
	for(int i=0; i<n; i++) 
	{
		mp[a[i]]++;
		if(mp[a[i]]==1) cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
