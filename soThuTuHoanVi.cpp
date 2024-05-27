#include<bits/stdc++.h>
using namespace std;

void init(vector<int> &a, int n)
{
    for(int i=0; i<n; i++) a[i]=i+1;
}

void gen(vector<int> &a, int n, bool &flag)
{
    int i=n-2;
    while(i>=0 && a[i]>=a[i+1]) i--;
    if(i==-1) flag=0;
    else{
        int j=n-1;
        while(a[j]<=a[i]) j--;
        swap(a[i], a[j]);
        int l=i+1, r=n-1;
        while(l<r)
        {
            swap(a[l], a[r]);
            l++; r--;
        }
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; 
        vector<int> a(n), b;
        for(int i=0; i<n; i++)
        {
            int tmp; cin >> tmp;
            b.push_back(tmp);
        }
        int cnt=1;
        init(a, n);
        bool flag = 1;
        while(flag)
        { 
            if(a==b) 
            {
                cout << cnt << endl;
                break;
            }
            gen(a, n, flag);
            cnt++;
        }
    }
    return 0;
}