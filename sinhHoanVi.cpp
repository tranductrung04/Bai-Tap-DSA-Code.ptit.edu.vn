#include<bits/stdc++.h>
using namespace std;

void init(int a[], int n){
    for(int i=1; i<=n; i++) a[i]=i;
}

void gen(int a[], int n, bool &flag){
    int i=n-1;
    while(i>=1 && a[i]>=a[i+1]) i--;
    if(i==0) flag = 0;
    else{
        int j=n;
        while(a[j]<=a[i]) j--;
        swap(a[i], a[j]);
        int l=i+1, r=n;
        while(l<r){
            swap(a[l], a[r]);
            l++; r--;
        }
    }
}

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[1005];
        init(a, n);
        bool flag = 1;
        while(flag){
            for(int i=1; i<=n; i++) cout << a[i];
            cout << " ";
            gen(a, n, flag);
        }
        cout << endl;
    }
    return 0;
}