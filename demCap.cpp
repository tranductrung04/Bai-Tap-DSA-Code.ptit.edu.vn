#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int count(int b[], int mp[], int x, int m)
{
    if(x==0) return 0;
    if(x==1) return mp[0];
    int d = upper_bound(b, b+m, x) - b;
    int tmp = m - d;
    tmp += (mp[0] + mp[1]);
    if(x==2) tmp -= (mp[3]+mp[4]);
    if(x==3) tmp += mp[2];
    return tmp;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int cnt = 0;
        int n, m; cin >> n >> m;
        int a[100005], b[100005], c[10] = {0};
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<m; i++)
        {
            cin >> b[i];
            if(b[i] < 5) c[b[i]]++;
        }
        sort(b, b+m);
        for(int i=0; i<n; i++)
        {
            cnt += count(b, c, a[i], m);  
		}
        cout << cnt << endl;
    }
    return 0;
}
