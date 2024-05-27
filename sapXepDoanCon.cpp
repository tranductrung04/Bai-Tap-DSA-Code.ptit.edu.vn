#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[100005], Max[100005], Min[100005];
		vector<int> res;
		for(int i=0; i<n; i++) cin >> a[i];
		Max[0]=a[0];
		for(int i=1; i<n; i++) Max[i] = max(a[i], Max[i-1]);
		Min[n-1]=a[n-1];
		for(int i=n-2; i>=0; i--) Min[i] = min(a[i], Min[i+1]);
		for(int i=0; i<n-1; i++)
			if(Max[i]<=Min[i+1]) res.push_back(i+1);
		if(!res.size()) cout << 0 << endl << endl;
		else
		{
			cout << res.size() << endl;
			for(auto x : res) cout << x << " ";
			cout << endl;			
		}
	}
	return 0;
}
