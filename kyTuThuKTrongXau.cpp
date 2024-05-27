#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		long long n, k; cin >> n >> k;
		char  c='A';
		while(k%2!=1){ c++; k/=2;}
		cout << c << endl;
	}
	return 0;
}
