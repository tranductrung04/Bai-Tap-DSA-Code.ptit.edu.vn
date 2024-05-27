#include<bits/stdc++.h>
using namespace std;

int n, x[1005][1005], used[1005];

void DFS(int u)
{
    stack<int> st;
    st.push(u); used[u]=1;
    cout << u << " ";
    while(!st.empty())
    {
        u = st.top();
        st.pop();
        for(int v=1; v<=n; v++)
        {
            if(!used[v] && x[u][v])
            {
                used[v]=1;
                st.push(u);
                st.push(v);
                cout << v << " ";
                break;
            }
        }
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int m, k; cin >> n >> m >> k;
        memset(x, 0, sizeof(x));
        memset(used, 0, sizeof(used));
        while(m--)
        {
            int tmp1, tmp2; cin >> tmp1 >> tmp2;
            x[tmp1][tmp2]=1;
        }       
        DFS(k);
        cout << endl;
    }
    return 0;
}