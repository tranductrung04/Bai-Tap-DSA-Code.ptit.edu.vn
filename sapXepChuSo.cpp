#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        set<int> s;
        for(int i=0; i<n; i++)
        {
            string tmp; cin >> tmp;
            for(char i : tmp) s.insert(i-'0');
        }
        for(auto x : s) cout << x << " ";
        cout << endl;
    }
    return 0;
}