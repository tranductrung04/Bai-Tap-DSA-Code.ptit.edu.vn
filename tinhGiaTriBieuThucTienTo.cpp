#include<bits/stdc++.h>
using namespace std;

int cal(int a, int b, char c)
{
    if(c=='+') return a+b;
    if(c=='-') return a-b;
    if(c=='*') return a*b;
    else return a/b;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        stack<int> st;
        for(int i=s.size()-1; i>=0; i--)
        {
            if(isdigit(s[i])) st.push(s[i]-'0');
            else
            {
                int tmp = st.top();
                st.pop();
                tmp = cal(tmp, st.top(), s[i]);
                st.pop();
                st.push(tmp);
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}