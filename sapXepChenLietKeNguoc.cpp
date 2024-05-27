#include<bits/stdc++.h>
using namespace std;

int main()
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
        int key = a[i];
        int j=i-1;
        while(j>=0 && a[j]>=key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
        res.push_back(a);
    }
    for(int i=n-1; i>=0; i--)
    {
        cout << "Buoc " << i << ": ";
        for(int j=0; j<i+1; j++) cout << res[i][j] << " ";
        cout << endl;
    }
    return 0;
}