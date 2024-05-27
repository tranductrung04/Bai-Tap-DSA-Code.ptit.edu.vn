#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[100005], e[100005], o[100005];
    int h=0, k=0, m=0, l=0;
    for(int i=0; i<n; i++) 
    {
        cin >> a[i];
        if(i%2==1) e[h++]=a[i];
        else o[k++]=a[i]; 
    }
    sort(e, e+h, greater<int>()); sort(o, o+k);
    for(int i=0; i<n; i++)
    {
        if(i%2==1) cout << e[m++] << " ";
        else cout << o[l++] << " ";
    }
    return 0;
}