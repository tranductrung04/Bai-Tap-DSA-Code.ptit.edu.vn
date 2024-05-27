#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, a[1005], cnt=0;
        cin >> n;
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++)
        {
            int min_idx = i;
            for(int j=i+1; j<n; j++) if(a[j] < a[min_idx]) min_idx = j;
            if(a[i]!=a[min_idx]) { swap(a[i], a[min_idx]); cnt++; }
        }
        cout << cnt << endl;
    }
    return 0;
}