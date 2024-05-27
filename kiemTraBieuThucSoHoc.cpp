#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<char> op;
    op.insert('*'); op.insert('/'); op.insert('+'); op.insert('-');
    int t; cin >> t;
    while(t--)
    {
        stack<char> st;
        bool flag=1; 
        string s; 
        scanf("\n"); getline(cin, s);
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(' || op.count(s[i])) st.push(s[i]);
            else if(s[i]==')') 
            {
                if(st.empty()) {flag=0; break;}
                else
                {
                    if(st.top()=='(') {flag=0; break;}
                    else 
                    {
                        while(st.top()!='(') 
                        {
                            st.pop();
                            if(st.empty()){ flag=0; break;}
                        }
                        if(st.empty()) break;
                        else st.pop();   
                    }
                }
            }
        }
        while(!st.empty())
        {
            if(st.top()=='(') {flag=0; break;}
            st.pop();
        }
        if(!flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}