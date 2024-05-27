#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n, k; cin >> n >> k;
        long long a[100005];
        bool flag = 0;
        for(int i=0; i<n; i++) cin >> a[i];
        unordered_map<long long, int> m;
        long long sum = 0; 
        for(int i=0; i<n; i++)
        {
            sum += a[i];
            if(sum==k || m[sum-k]) {flag = 1; break;}
            m[sum]=1;
        }
        cout << ((flag)?"YES":"NO") << endl;
    }
    return 0;
}