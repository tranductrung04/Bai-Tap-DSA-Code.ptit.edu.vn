#include<bits/stdc++.h>
using namespace std;

long long cnt = 0;

void Merge(long long a[], int l, int m, int r)
{
    vector<long long> x(a+l, a+m+1);
    vector<long long> y(a+m+1, a+r+1);
    int i=0, j=0;
    while(i<x.size() && j<y.size())
    {
        if(x[i]>y[j]){cnt+=x.size()-i; a[l++]=y[j++]; }
        else a[l++]=x[i++];
    }
    while(i<x.size()) a[l++]=x[i++];
    while(j<y.size()) a[l++]=y[j++];
}

void MergeSort(long long a[], int l, int r)
{
    if(l>=r) return;
    int m = (l+r)/2;
    MergeSort(a, l, m);
    MergeSort(a, m+1, r);
    Merge(a, l, m, r);
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cnt = 0;
        int n; cin >> n;
        long long a[100005];
        for(int i=0; i<n; i++) cin >> a[i];
        MergeSort(a, 0, n-1);
        cout << cnt << endl;
    }
    return 0;
}