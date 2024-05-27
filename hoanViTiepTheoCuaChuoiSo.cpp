#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int T; cin >> T; cout << T << " ";
        string a; cin >> a;
        int i = a.size()-2;
        while(i>=0 && a[i]>=a[i+1]) i--;
        if(i==-1) cout << "BIGGEST" << endl;
        else
        {
            int j=a.size()-1;
            while(a[j]<=a[i]) j--;
            swap(a[i], a[j]);
            int l=i+1, r=a.size()-1;
            while(l<r)
            {
                swap(a[l], a[r]);
                l++; r--;
            }
            cout << a << endl;
        }
    }
    return 0;
}