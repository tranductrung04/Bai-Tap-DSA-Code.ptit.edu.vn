#include<bits/stdc++.h>
using namespace std;

int n, a[35]; 
long long s;
int res = INT_MAX;
bool flag = 0;

void Try(int i, int sum, int cnt)
{
    if(sum > s) return;
    if(sum == s)
    {
        flag = 1;
        res = min(res, cnt);
    } 
    for(int j=i; j<=n; j++)
    {
        if(sum + a[j] <= s) Try(j+1, sum+a[j], cnt+1); 
    }
}

int main()
{
    cin >> n >> s;
    for(int i=1; i<=n; i++) cin >> a[i];
    sort(a, a+n+1);
    Try(1, 0, 0);
    if(flag) cout << res << endl;
    else cout << -1 << endl;
    return 0;
}