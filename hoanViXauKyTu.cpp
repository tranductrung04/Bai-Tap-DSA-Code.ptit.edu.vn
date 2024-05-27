#include<bits/stdc++.h>
using namespace std;

void Try(string s, vector<int> &idx, vector<int> &u, int n, int m)
{
    for(int i=1; i<=n; i++)
    {
        if(u[i])
        {
            idx[m]=i;
            u[i]=0;
            if(m==n)
            {
                for(int j=1; j<=n; j++) cout << s[idx[j]-1];
                cout << " ";
            }
            else Try(s, idx, u, n, m+1);
            u[i]=1;
        } 
    }
} 

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int n = s.size();
        vector<int> idx(n+1);
        vector<int> u(n+1, 1);
        Try(s, idx, u, n, 1);
        cout << endl;
    }
    return 0;
}