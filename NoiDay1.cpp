#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        multiset<int> s;
        long long fopt=0;
        long long first, second;
        for(int i=0; i<n; i++)
        {
            int tmp; cin >> tmp;
            s.insert(tmp);
        }
        while(s.size()>1)
        {
            first = *s.begin(); s.erase(s.find(*s.begin()));
            second = *s.begin(); s.erase(s.find(*s.begin()));
            fopt += first + second;
            s.insert(first+second);
        }
        cout << fopt << endl;
    }
    return 0;
}