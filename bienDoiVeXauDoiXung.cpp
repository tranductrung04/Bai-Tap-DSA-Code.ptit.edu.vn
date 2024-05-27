#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int dp[105][105]={0};
        int n=s.size();
        int MinLen = 1, MaxLen=0;
        for(int i=2; i<=n; i++)
        {
            for(int j=1; j<=n-i+1; j++)
            {
                int k=j+i-1;
                if(s[k-1]!=s[j-1]) dp[j][k] = min(dp[j][k-1], dp[j+1][k])+1;
                else dp[j][k]=dp[j+1][k-1];
            }
        }
        cout << dp[1][n] << endl;
    }
    return 0;
}
/*
  a e b c b d a
a 0 1 2 3 2 3 2
e 0 0 1 2 1 2 3
b 0 0 0 1 0 1 2 
c 0 0 0 0 1 2 3
b 0 0 0 0 0 1 2
d 0 0 0 0 0 0 1
a 0 0 0 0 0 0 0
*/