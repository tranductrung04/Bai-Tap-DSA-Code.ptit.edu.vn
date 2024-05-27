#include<bits/stdc++.h>
using namespace std;

void Try(vector<int> &a, int n, int sum, int tmp, int j, bool &flag)
{
    if(flag) return;
    for(int i=j; i<n; i++)
    {
        if(tmp + a[i] == sum)
        {
            flag = 1;
            return;
        }
        else if(tmp+a[i] < sum) Try(a, n, sum, tmp+a[i], i+1, flag);
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        int sum = 0;
        for(int &i : a) { cin >> i; sum += i; }
        bool flag = 0;
        if(sum & 1) cout << "NO" << endl;
        else
        {
            Try(a, n, sum/2, 0, 0, flag);
            cout << ((flag)?"YES":"NO") << endl;
        }
    }
    return 0;
}