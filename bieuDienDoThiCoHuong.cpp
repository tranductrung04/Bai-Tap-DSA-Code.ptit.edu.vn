#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        vector<vector<int>> ke(100005);
        while(m--)
        {
            int tmp1, tmp2; cin >> tmp1 >> tmp2;
            ke[tmp1-1].push_back(tmp2);
        }
        for(int i=0; i<n; i++)
        {
            cout << i+1 << ": ";
            for(auto x : ke[i]) cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}