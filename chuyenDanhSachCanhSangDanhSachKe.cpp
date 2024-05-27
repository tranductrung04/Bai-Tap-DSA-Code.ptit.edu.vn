#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin >> t;
    while(t--)
    {
        vector<vector<int>> ke(100005);
        int n, m;
        cin >> n >> m;
        while(m--)
        {
            int tmp1, tmp2; cin >> tmp1 >> tmp2;
            ke[tmp1-1].push_back(tmp2);
            ke[tmp2-1].push_back(tmp1);
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