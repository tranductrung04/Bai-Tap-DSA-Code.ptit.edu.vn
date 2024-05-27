#include<bits/stdc++.h>
using namespace std;

void gen(vector<int> &a, int n, bool &flag)
{
    int i=n-1;
    while(i>=0 && a[i]==1) a[i--]=0;
    if(i==-1) flag=0;
    else a[i]=1;
}

bool xor_c(int a, int b)
{
    return a!=b;
}

void binaryToGray(vector<int> &a, int n)
{
    vector<int> g;
    g.push_back(a[0]);
    for(int i=1; i<n; i++) g.push_back(xor_c(a[i], a[i-1]));
    for(int i : g) cout << i;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n, 0);
        bool flag = 1;
        while(flag)
        {
            binaryToGray(a, n);
            cout << " ";
            gen(a, n, flag);
        }
        cout << endl;
    }
    return 0;
}