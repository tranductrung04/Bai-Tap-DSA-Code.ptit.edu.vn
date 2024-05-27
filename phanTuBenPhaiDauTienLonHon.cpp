#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a[100005];
        stack<int> st;
        int n; cin >> n;
        int res[100005]={0};
        res[n-1]=-1;
        for(int i=0; i<n; i++) cin >> a[i];
        st.push(a[n-1]);
        for(int i=n-2; i>=0; i--)
        {
            while(!st.empty() && st.top()<=a[i])
            {
                st.pop();
            }
            if(!st.empty()) res[i]=st.top();
            else res[i]=-1;
            st.push(a[i]);
        }
        for(int i=0; i<n; i++) cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}