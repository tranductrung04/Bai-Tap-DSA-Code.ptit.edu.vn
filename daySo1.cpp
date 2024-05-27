#include<bits/stdc++.h>
using namespace std;

void Try(vector<int> &a, int n)
{
    cout << "[";
    for(int i=0; i<a.size()-1; i++) cout << a[i] << " ";
    cout << a[a.size()-1] << "]" << endl;
    
    for(int i=0; i<a.size()-1; i++) a[i]+=a[i+1];    
    a.pop_back();
    
    if(a.size()!=0) Try(a, n);
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(int &x : a) cin >> x;
        Try(a, n);
    }
    return 0;
}