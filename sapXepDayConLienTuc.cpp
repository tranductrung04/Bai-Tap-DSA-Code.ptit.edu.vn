#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int first=n-1, last=0;
        vector<int> a, b;
        bool fflag = 0;
        for(int i=0; i<n; i++)  
        {
            int tmp; cin >> tmp;
            a.push_back(tmp);
            b.push_back(tmp);
        }
        sort(a.begin(), a.end());
        for(int i=0; i<n; i++)
        {
            if(b[i]!=a[i] && !fflag) { first=i; fflag=1; }
            if(b[i]!=a[i]) last = i;
        }
        cout << first+1  << " " << last+1 << endl;
    }
    return 0;
}