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
            int tmp; cin >> tmp;
            s.insert(tmp);
        }
        int l=*s.begin(), r=*s.rbegin();
        cout << r-l+1-s.size() << endl;
    }
    return 0;
}