#include<bits/stdc++.h>
using namespace std;

int x[1005][1005];

int main()
{
    int n; cin >> n;
    vector<vector<int>> ke(1005);
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++) cin >> x[i][j];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(x[i][j] && i<j) 
            {
                ke[i].push_back(j);
                ke[j].push_back(i);
            }
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(auto x : ke[i]) cout << x << " ";
        cout << endl;
    }
    return 0;
}