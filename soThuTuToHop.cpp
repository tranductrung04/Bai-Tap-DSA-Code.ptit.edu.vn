#include<bits/stdc++.h>
using namespace std;

void init(vector<int> &a, int k)
{
    for(int i=0; i<k; i++) a[i]=i+1;
}

void gen(vector<int> &a, int n, int k, bool &flag)
{
    int i=k-1;
    while(i>=0 && a[i]==n-k+i+1) i--;
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
        vector<int> a(k), b;
        for(int i=0; i<k; i++)
        {
            int tmp; cin >> tmp;
            b.push_back(tmp);
        }
        init(a, k);
        int cnt=1;
        bool flag=1;
        while(flag)
        {
            if(a==b)
            {
                cout << cnt << endl;
                break;
            }
            gen(a, n, k, flag);
            cnt++;
        }
    }
    return 0;
}