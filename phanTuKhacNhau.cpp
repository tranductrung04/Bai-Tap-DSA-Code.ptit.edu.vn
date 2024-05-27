#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		vector<long long> a, b;
		for(int i=0; i<n; i++)
		{
			long long tmp; cin >> tmp;
			a.push_back(tmp);
		}
		for(int i=0; i<n-1; i++)
		{
			long long tmp; cin >> tmp;
			b.push_back(tmp);
		}
		for(int i=0; i<n; i++)
		{
			if(a[i]!=b[i]) { cout << i+1 << endl; break;}
		}
	}
	return 0;
}
