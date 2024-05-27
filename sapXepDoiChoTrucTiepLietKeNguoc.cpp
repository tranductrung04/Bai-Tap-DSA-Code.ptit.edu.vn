#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;        
    while(t--)
    {
        int n; cin >> n;
        vector<int> a;
        vector<vector<int>> res;
        for(int i=0; i<n; i++) 
        {
            int tmp; cin >> tmp;
            a.push_back(tmp);
        }
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++) 
                if(a[i]>a[j]) swap(a[i], a[j]);
            res.push_back(a);
        }
        for(int i=n-2; i>=0; i--)
        {
            cout << "Buoc " << i+1 << ": ";
            for(int j=0; j<n; j++) cout << res[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}