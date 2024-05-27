#include<bits/stdc++.h>
using namespace std;

void init(vector<int> &a, int k)
{
    for(int i=0; i<k; i++) a[i]=i;
}

void gen(vector<int> &a, int n, int k, bool &flag)
{
    int i=k-1;
    while(i>=0 && a[i]==n-k+i) i--;
    if(i==-1) flag = 0;
    else
    {
        a[i]++;
        for(int j=i+1; j<k; j++) a[j]=a[i]+j-i;       
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        bool flag = 1;
        vector<int> idx(k);
        string a;
        init(idx, k);
        a[0] = 'A';
        for(int i=1; i<n; i++) a[i] = a[i-1]+1;
        while(flag)
        {
            for(int i : idx) cout << a[i];
            cout << endl;
            gen(idx, n, k, flag);
        }
    }
    return 0;
}