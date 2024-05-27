#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		queue<string> q;
		q.push("9");
		if(9%n==0) {cout << 9 << endl; continue;}
		while(!q.empty() && q.front().size()<19)
		{
			string tmp = q.front();
			q.pop();
			long long num1 = stoll(tmp+"0");
			if(num1%n==0) {cout << num1 << endl; break;}
			long long num2 = stoll(tmp+"9");
			if(num2%n==0) {cout << num2 << endl; break;}
			q.push(tmp+"0");
			q.push(tmp+"9");
		}
	}
	return 0;
}
