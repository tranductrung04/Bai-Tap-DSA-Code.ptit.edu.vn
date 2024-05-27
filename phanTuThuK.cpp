#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int m, n, k; cin >> m >> n >> k;
		vector<int> a;
		for(int i=0; i<m; i++)
		{
			int tmp; cin >> tmp;
			a.push_back(tmp);
		}
		for(int i=0; i<n; i++)
		{
			int tmp; cin >> tmp;
			a.push_back(tmp);
		}
		sort(a.begin(), a.end());
		cout << a[k-1] << endl;
	}
	return 0;
}
