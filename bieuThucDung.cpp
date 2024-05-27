#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		long long cnt=0, res=0;
		for(int i=0; i<s.size(); i++)
		{
			if(s[i]=='[') cnt++;
			else
			{
				cnt--;
				if(cnt<0)
				{
					res += (-cnt);
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}

