#include<bits/stdc++.h>
using namespace std;
const long long q = 1e9+7;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		multiset<int> ms;
		long long first, second;
		long long res = 0;
		for(int i=0; i<n; i++)
		{
			int tmp; cin >> tmp;
			ms.insert(tmp);		
		}
		while(ms.size()>1)
		{
			first = *ms.begin(); ms.erase(ms.find(first));			
			second = *ms.begin(); ms.erase(ms.find(second));
			ms.insert((first+second)%q);
			res += (first+second)%q;
			res %= q;			
		}		
		cout << res << endl;
	}
	return 0;
}
