#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<long long> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        stack<long long> st;
        long long res = 0, idx, tmp;
        int j=0;
        while(j<n)
        {
            if(st.empty() || a[st.top()] <= a[j]) st.push(j++);
            else
            {
                idx = st.top();
                st.pop();
                tmp = a[idx] * ((st.empty())?j:j-st.top()-1);
                res = max(res, tmp);
            }
        }
        while(!st.empty())
        {
            idx = st.top();
            st.pop();
            tmp = a[idx] * ((st.empty())?j:j-st.top()-1);
            res = max(res, tmp);
        }
        cout << res << endl;
    }
    return 0;
}
