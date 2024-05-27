#include<bits/stdc++.h>
using namespace std;

string check(long long a[], int n)
{
    for(int i=n-1; i>1; i--)
    {
        for(int j=n-2; j>=1; j--)
        {
            if(binary_search(a, a+j, a[i]-a[j])) return "YES";
        }
    }
    return "NO";
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        long long a[50005];
        for(int i=0; i<n; i++) {cin >> a[i]; a[i] *= a[i];}
        sort(a, a+n);
        cout << check(a, n) << endl;
    }
    return 0;
}