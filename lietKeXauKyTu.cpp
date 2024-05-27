#include<bits/stdc++.h>
using namespace std;

void Try(vector<int> &a, int n, int k, int m)
{
    for(int i=a[m-1]; i<=n; i++)
    {
        a[m]=i;
        if(m==k)
        {
            string s="";
            for(int i=1; i<=k; i++) 
            {
                char c = (char)(a[i]+64);
                s += c;
            }
            cout << s << endl;
        }
        else Try(a, n, k, m+1);
    }
}

int main()
{
    char c;
    int k;
    cin >> c >> k;
    int n = c - 'A' + 1;
    vector<int> a(k+1, 1);
    Try(a, n, k, 1);
    return 0;
}