#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    int q; cin >> q;
    while(q--)
    {
        string s; 
        int n;
        cin >> s;
        if(s=="PUSH")
        {
            cin >> n;
            st.push(n);
        }
        else if(s=="POP")
        {
            if(!st.empty()) st.pop();
        }
        else 
        {
            if(st.empty()) cout << "NONE" << endl;
            else cout << st.top() << endl;
        }
    }
    return 0;
}