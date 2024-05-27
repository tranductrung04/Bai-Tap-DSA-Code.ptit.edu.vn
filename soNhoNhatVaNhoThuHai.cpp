#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[100005];
        set<int> s;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        if(s.size()<2) cout << -1 << endl;
        else
        {
            auto it = s.begin();
            cout << *it << " "; it++;
            cout << *it << endl;
        }
        
    }
    return 0;
}