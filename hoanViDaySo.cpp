#include<bits/stdc++.h>
using namespace std;

void init(vector<int> &a, int n)
{
    for(int i=0; i<n; i++) a[i]=i;
}

void gen(vector<int> &a, int n, bool &flag)
{
    int i=n-2;
    while(i>=0 && a[i]>=a[i+1]) i--;
    if(i==-1) flag = 0;
    else
    {
        int j=n-1;
        while(a[j]<=a[i]) j--;
        swap(a[i], a[j]);
        int l=i+1, r=n-1;
        while(l<r)
        {
            swap(a[l], a[r]);
            l++, r--;
        }
    }
}

int main()
{
    int n; cin >> n;
    vector<int> a(n), idx(n);
    for(int &i : a) cin >> i;
    sort(a.begin(), a.end());
    bool flag = 1;
    init(idx, n);
    while(flag)
    {
        for(int &i : idx) cout << a[i] << " ";
        cout << endl;  
        gen(idx, n, flag); 
    }
    return 0;
}