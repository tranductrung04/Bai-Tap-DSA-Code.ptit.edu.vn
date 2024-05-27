#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        int a[100005], b[100005];
        map<int, int> map;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            map[a[i]]++;
        } 
        for(int i=0; i<m; i++)
        {
            cin >> b[i];
            map[b[i]]++;
        }
        for(auto i=map.begin(); i!=map.end(); i++) cout << i->first << " ";
        cout << endl;
        for(auto i=map.begin(); i!=map.end(); i++)
            if(i->second!=1) cout << i->first << " ";
        cout << endl;  
    }
    return 0;
}