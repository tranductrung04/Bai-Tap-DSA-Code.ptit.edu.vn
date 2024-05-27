#include<bits/stdc++.h>
using namespace std;

int Max_Area(int a[], int n)
{
    stack<int> st;
    int i=0, res=0, idx, tmp;
    while(i<n)
    {
        if(st.empty() || a[st.top()] <= a[i]) st.push(i++);
        else
        {
            idx = st.top();
            st.pop();
            tmp = a[idx]*((st.empty())?i:i-st.top()-1);
            res = max(res, tmp);
        }
    }
    while(!st.empty())
    {
        idx = st.top();
        st.pop();
        tmp = a[idx]*((st.empty())?i:i-st.top()-1);
        res = max(res, tmp);
    }
    return res;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        int a[505][505];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++) cin >> a[i][j];
        }
        for(int i=1; i<n; i++)
            for(int j=0; j<m; j++) if(a[i][j]) a[i][j]+=a[i-1][j];
        int res=0;
        for(int i=0; i<n; i++)
            res = max(res, Max_Area(a[i], m));
        cout << res << endl;
    }
    return 0;
}