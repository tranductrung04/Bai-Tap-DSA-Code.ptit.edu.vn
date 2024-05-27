#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; 
        scanf("\n"); getline(cin, s);
        stack<string> st;
        stringstream ss(s);
        string token;
        while(ss >> token) st.push(token);
        while(!st.empty())
        {
            cout << st.top() << " "; 
            st.pop();
        }
        cout << endl;
    }
    return 0;
}