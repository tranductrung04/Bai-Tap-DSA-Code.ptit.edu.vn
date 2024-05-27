#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<long long> a;
        int res = 0;
        for(int i=0; i<n; i++)
        {
            long long tmp; cin >> tmp;
            a.push_back(tmp);
        }
        long long Min = *min_element(a.begin(), a.end());
        for(int i=0; i<n; i++) 
            if(a[i]==Min) {res = i; break;}
        cout << res << endl;
    }
    return 0;
}