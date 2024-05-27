#include<bits/stdc++.h>
using namespace std;

int n, x;
int a[100];
bool flag = 0;

void Try(int i, int sum, string s)
{
    if(sum>x) return;
    if(sum==x)
    {
        s.pop_back();
        cout << s << "]";
        flag = 1;
        return;
    }
    for(int j=i; j<n; j++)
    {
        if(sum + a[j] <= x)
            Try(j, sum+a[j], s + to_string(a[j]) + " ");
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        flag = 0;
        cin >> n >> x;
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        Try(0, 0, "[");
        if(!flag) cout << -1;
        cout << endl;
    }
    return 0;
}