#include<bits/stdc++.h>
using namespace std;

bool check(string s)
{
    stack<char> st;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(' || s[i]=='[' || s[i]=='{') st.push(s[i]);
        else if(s[i]==']')
        {
            if(st.empty()) return false;
            else if(st.top()=='(' || st.top()=='{') return false;
            else st.pop();
        }
        else if(s[i]==')')
        {
            if(st.empty()) return false;
            else if(st.top()=='[' || st.top()=='{') return false;
            else st.pop();
        }
        else if(s[i]=='}')
        {
            if(st.empty()) return false;
            else if(st.top()=='(' || st.top()=='[') return false;
            else st.pop();
        }
    }
    if(!st.empty()) return false;
    return true;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        cout << ((check(s))?"YES":"NO") << endl;
    }
    return 0;
}
/*

([])
*/