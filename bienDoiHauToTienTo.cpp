#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        stack<string> res;
        for(int i=0; i<s.size(); i++)
        {
            if(isalpha(s[i])) res.push(string(1, s[i]));
            else
            {
                string tmp = res.top();
                res.pop();
                tmp = string(1, s[i]) + res.top() + tmp;
                res.pop();
                res.push(tmp);
            }
        }
        cout << res.top() << endl;
    }
    return 0;
}