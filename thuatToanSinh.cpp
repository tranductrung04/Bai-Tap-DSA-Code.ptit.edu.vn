#include<bits/stdc++.h>
using namespace std;

bool check(int a[], int n)
{
    int l=1, r=n;
    while(l<r){
        if(a[l]!=a[r]) return false;
        l++; r--;
    }
    return true;
}

void gen(int a[], int n, bool &flag)
{
    int i = n;
    while(i>=1 && a[i]==1) a[i--] = 0;
    if(i==0) flag = 0;
    else a[i] = 1;
}

int main()
{
    int n; cin >> n;
    int a[100] = {0};
    bool flag = 1;
    while(flag){
        if(check(a, n)){
            for(int i=1; i<=n; i++) cout << a[i] << " "; cout << endl;
        }
        gen(a, n, flag);
    }
    return 0;
}