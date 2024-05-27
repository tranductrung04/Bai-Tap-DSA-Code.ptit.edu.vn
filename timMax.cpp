#include<bits/stdc++.h>
using namespace std;
const int q=1e9+7;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a;
        long long Max=0;
        for(int i=0; i<n; i++) 
        {
            int tmp; cin >> tmp;
            a.push_back(tmp);
        }
        sort(a.begin(), a.end());
        for(int i=0; i<n; i++) 
        {
            Max += (long long) a[i]*i;
            Max %= q;
        }
        cout << Max << endl;
    }
    return 0;
}