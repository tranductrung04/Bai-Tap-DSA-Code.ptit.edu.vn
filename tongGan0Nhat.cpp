#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[1005], Min=INT_MAX, res;
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(abs(a[j]+a[i]) < Min)
                {
                    res = a[j] + a[i];
                    Min = abs(a[j]+a[i]);
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}