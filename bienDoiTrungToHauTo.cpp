#include<bits/stdc++.h>
using namespace std;

int pri(char a)
{
    if(a=='^') return 4;
    if(a=='*' || a=='/') return 3;
    if(a=='+' || a=='-') return 2;
    return 1;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        stack<char> st;
        string res = "";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(') st.push(s[i]);
            else if(s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='*' || s[i]=='^')
            {
               while(!st.empty() && pri(st.top()) >= pri(s[i]))
               {
                    res.push_back(st.top());
                    st.pop();
               } 
               st.push(s[i]);
            }  
            else if(s[i]==')')
            {
                while(!st.empty() && st.top()!='(')
                {
                    res.push_back(st.top());
                    st.pop();
                }
                st.pop();
            }
            else res.push_back(s[i]);
        }
        while(!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }
        cout << res << endl;
    }
    return 0;
}