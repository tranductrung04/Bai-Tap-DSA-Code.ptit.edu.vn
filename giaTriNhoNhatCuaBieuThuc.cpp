#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		vector<long long> a, b;
		long long sum = 0;
		for(int i=0; i<n; i++) { long long tmp; cin >> tmp; a.push_back(tmp);}
		for(int i=0; i<n; i++) { long long tmp1; cin >> tmp1; b.push_back(tmp1);}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end(), greater<int>());
		for(int i=0; i<n; i++)
		{
			sum += a[i]*b[i];
		}
		cout << sum << endl;
	}
	return 0;
}
