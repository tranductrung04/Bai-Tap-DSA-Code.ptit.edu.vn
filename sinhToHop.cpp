#include<bits/stdc++.h>
using namespace std;

void init(int a[], int k)
{
    for(int i=1; i<=k; i++) a[i]=i;
}

void gen(int a[], int n, int k, bool &flag)
{
    int i=k;
    while(i>=1 && a[i]==n-k+i) i--;
    if(i==0) flag = 0;
    else{
        a[i]++;
        for(int j=i+1; j<=k; j++) a[j]=a[i]+j-i;
    }
}

int main()
{
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[20];
        init(a, k);
        bool flag = 1;
        while(flag){
            for(int i=1; i<=k; i++) cout << a[i];
            cout << " ";
            gen(a, n, k, flag);
        }
        cout << endl;
    }
    return 0;
}