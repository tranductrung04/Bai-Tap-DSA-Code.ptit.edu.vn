#include<bits/stdc++.h>
using namespace std;

long long BiToDe(string s)
{
    long long res = 0;
    int n = s.size()-1;
    for(int i=0; i<s.size(); i++)
    {
        res += pow(2, n--)*(s[i]-'0');
    }
    return res;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s1, s2; cin >> s1 >> s2;
        long long  a = BiToDe(s1);
        long long b = BiToDe(s2);
        cout << a*b << endl;
    }
    return 0;
}