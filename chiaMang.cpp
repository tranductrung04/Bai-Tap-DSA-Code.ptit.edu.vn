#include<bits/stdc++.h>
using namespace std;

int n, k, a[25], sum = 0, cnt=0;
vector<int> u(25, 1);
bool flag = 0;

void Try(int tmp, int cnt)
{
	if(flag) return;
	if(cnt == k) { flag = 1; return;}
	for(int j=0; j<n; j++)
	{
		if(u[j])
		{
			u[j]=0;
			if(tmp==sum) 
			{
				Try(0, cnt+1);
				return;				
			}
			if(tmp > sum) return;
			else Try(tmp+a[j], cnt);
		}
		u[j]=1;
	}	
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
    	fill(u.begin(), u.end(), 1);
    	flag = 0; sum = 0; cnt = 0;
        cin >> n >> k;
        for(int i=0; i<n; i++) 
        {
        	cin >> a[i];
        	sum += a[i];
		}
        if(sum%k!=0) cout << 0;
		else
		{
			sum/=k;
			Try(0, 0);
			cout << flag;
		}   
		cout << endl; 
    }
    return 0;
}
