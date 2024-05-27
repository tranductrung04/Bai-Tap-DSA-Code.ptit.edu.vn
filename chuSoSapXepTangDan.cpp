#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;

int main()
{
	int f[105]={0};
	f[0]=0;
	f[1]=10;
	vector<int> a(10, 1);
	for(int i=2; i<=100; i++)
	{
		for(int j=1; j<=9; j++) 
		{
			long long sum=0;
			for(int k=j; k<=9; k++)
			{ 
				sum+=a[k];
				sum%=mod;	
			}
			a[j]=sum;
			f[i]+=a[j]; f[i]%=mod;
		}
		f[i]+=f[i-1]; f[i]%=mod;		
	}
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout << f[n] << endl;
	}
    return 0;
}
