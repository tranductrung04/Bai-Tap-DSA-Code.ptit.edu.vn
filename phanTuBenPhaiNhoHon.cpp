#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n), ng(n, 0), rs(n, 0);
        stack<int> st;
        for(int i=0; i<n; i++) cin >> a[i];
        st.push(n-1);
        ng[n-1]=-1;
        for(int i=n-2; i>=0; i--)
        {
            while(!st.empty() && a[st.top()] <= a[i])
            {
                st.pop();
            } 
            if(!st.empty()) ng[i]=st.top();
            else ng[i]=-1;
            st.push(i);
        }
        stack<int> st1;
        st1.push(n-1);
        rs[n-1]=-1;
        for(int i=n-2; i>=0; i--)
        {
            while(!st1.empty() && a[st1.top()] >= a[i])
            {
                st1.pop();
            }
            if(!st1.empty()) rs[i]=st1.top();
            else rs[i]=-1;
            st1.push(i);
        }
        for(int i=0; i<n; i++)
        {
            if(ng[i]==-1 || rs[ng[i]]==-1) cout << -1 << " ";
            else cout << a[rs[ng[i]]] << " ";
        }
        cout << endl;
    }
    return 0;
}