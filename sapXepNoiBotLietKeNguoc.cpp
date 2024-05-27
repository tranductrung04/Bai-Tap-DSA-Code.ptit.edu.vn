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
        for(int i=0; i<n-1; i++)
        {
            bool flag = 0;
            for(int j=0; j<n-i-1; j++)
                if(a[j]>a[j+1]) {swap(a[j], a[j+1]); flag = 1;}
            if(!flag) break;
            res.push_back(a); 
        }
        for(int i=res.size()-1; i>=0; i--)
        {
            cout << "Buoc " << i+1 << ": ";
            for(int j=0; j<n; j++) cout << res[i][j] << " ";
            cout << endl; 
        }
    }
    return 0;
}