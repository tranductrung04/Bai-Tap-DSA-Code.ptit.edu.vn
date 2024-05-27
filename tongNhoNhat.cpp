#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string a[20], r, l;
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        for(int i=0; i<n; i++)
        {
            if(i%2==0) r+=a[i];
            else l+=a[i];
        }
        cout << stoll(r)+stoll(l) << endl;
    }
    return 0;
}