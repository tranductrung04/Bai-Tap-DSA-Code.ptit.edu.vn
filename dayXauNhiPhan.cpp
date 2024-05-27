#include<bits/stdc++.h>
using namespace std;

long long f[95];

void solve(long long n, long long k)
{
	while(n>=3)
	{
		if(k>f[n-2]){ k-=f[n-2]; n-=1; }
		else n-=2;
	}
	if(n==1) cout << '0' << endl;
	else cout << '1' << endl;
}

int main()
{
	f[1]=1; f[2]=1;
	for(int i=3; i<93; i++) f[i]=f[i-2]+f[i-1];
	int t; cin >> t;
	while(t--)
	{
		long long n, k; cin >> n >> k;		
		solve(n, k);
	}
	return  0;
}
