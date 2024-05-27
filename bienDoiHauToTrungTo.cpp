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
                tmp = res.top() + string(1, s[i]) + tmp;
                res.pop();
                res.push("(" + tmp + ")");
            } 
        }
        cout << res.top() << endl;
    }
}