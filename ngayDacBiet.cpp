#include<bits/stdc++.h>
using namespace std;

bool check(string s)
{
    if(s[4]!='2') return false;
    if(s[2]==s[3]) return false;
    if(s[2]=='2') return false;
    if(s[0]=='0' && s[1]=='0') return false;
    return true;
}

void Try(vector<int> &a, vector<string> &res, int m)
{
    for(int i=0; i<=1; i++)
    {
        if(i) a[m]=2;
        else a[m]=i;
        if(m==7)
        {
            string s="";
            for(int j : a) s += to_string(j);
            if(check(s))
            {
                s.insert(s.begin()+2, '/');
                s.insert(s.begin()+5, '/');
                res.push_back(s);
            }
        }
        else Try(a, res, m+1);

    }
}

int main()
{
    vector<int> a(8, 0);
    vector<string> res;
    Try(a, res, 0);
    sort(res.begin(), res.end());
    for(auto x : res) cout << x << endl;
    return 0;
}