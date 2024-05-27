#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int cnt=0;
        vector<int> b(n);
        set<int> s;
        for(int i=1; i<=k; i++)
        {
            int tmp; cin >> tmp;   
            b[i] = tmp;
            s.insert(tmp);
        }
        int i=k;
        while(i>=1 && b[i]==n-k+i) i--;
        if(i==0) cout << k << endl;
        else 
        {
            b[i]++;
            for(int j=i+1; j<=k; j++) b[j]=b[i]+j-i;
            for(int j=1; j<=k; j++) if(!s.count(b[j])) cnt++;
            cout << cnt << endl;
        }
    }
    return 0;
}