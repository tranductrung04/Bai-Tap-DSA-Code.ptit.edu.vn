#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        vector<int> a(k);
        for(int &x : a) cin >> x;
        int i=k-1;
        while(i>=1 && a[i]==a[i-1]+1) i--;
        if(i==0 && a[k-1]==k)
        {
            for(int j=n-k+1; j<=n; j++) cout << j << " ";
        }
        else
        {
            a[i]--;
            if(a[k-1]!=n) for(int j=i+1; j<k; j++) a[j]++;
            for(int x : a) cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}