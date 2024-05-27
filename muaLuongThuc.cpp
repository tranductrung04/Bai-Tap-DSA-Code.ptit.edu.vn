#include<bits/stdc++.h>
using namespace std;

int n, s, m;

int check()
{
	int res = (m*s%n==0)?0:1;
	res += m*s/n;
	if(res>s-s/7) return -1;
	else return res; 
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> s >> m;
		cout << check() << endl;		
	}
	return 0;
}
