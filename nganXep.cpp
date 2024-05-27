#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n;
    stack<int> st;
    while(cin >> s)
    {
        if(s=="push")
        {
            cin >> n; st.push(n);
        }
        else if(s=="show")
        {
            stack<int> tmp;
            if(st.empty()) cout << "empty";
            else 
            {
                while(!st.empty())
                {
                    tmp.push(st.top());
                    st.pop();
                }
                while(!tmp.empty())
                {
                    cout << tmp.top() << " ";
                    st.push(tmp.top());
                    tmp.pop();
                }
            }
            cout << endl;
        }
        else if(!st.empty()) st.pop(); 
    }
    return 0;
}