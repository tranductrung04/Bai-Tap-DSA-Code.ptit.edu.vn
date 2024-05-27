#include<bits/stdc++.h>
using namespace std;

vector<long long> a;

void center(long long n)
{
    long long tmp=1, i=2;
    a.push_back(2);
    while(n/2)
    {
        tmp = pow(2, i);
        a.push_back(tmp);
        i++;
        n /= 2;
    }
}

long long count(long long n, long long k, long long i)
{
    if(k%2==1) return 1;
    if(k==a[i]) return n%2; 
    if(k>a[i]) return count(n/2, 2*a[i]-k, i-1);
    if(k<a[i]) return count(n/2, k, i-1);
    return 0;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n, l, r; cin >> n >> l >> r;
        a.clear();
        center(n); 
        long long cnt = 0;
        for(long long i=l; i<=r; i++)
            cnt += count(n*2, i, a.size()-1);
        cout << cnt << endl;
    }
    return 0;
}