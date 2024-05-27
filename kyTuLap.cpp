#include<bits/stdc++.h>
using namespace std;

int n;
string s[15];
int a[15], u[15]={0}, res = INT_MAX;

int count(string a, string b)
{
    int tmp = 0;
    for(char &x : a)
        for(char &y : b) if(x == y) tmp++;
    return tmp;
}

void Try(int i, int cnt, int k)
{
    for(int j=0; j<n; j++)
    {
        if(!u[j])
        {
            u[j]=1;
            if(i==n-1)
            {
                cnt += count(s[k], s[j]);
                res = min(res, cnt);
            }
            else if(res>cnt) Try(i+1, cnt + count(s[k], s[j]), j);
            u[j]=0;
        }
    }
}

int main()
{
    cin >> n;
    for(int i=0; i<n; i++) cin >> s[i];
    Try(0, 0, -1);
    cout << res << endl;
    return 0;
}