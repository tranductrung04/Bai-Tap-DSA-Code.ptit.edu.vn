#include<bits/stdc++.h>
using namespace std;

int n, m, used[1005], x[1005][1005];
int cnt=0;

void DFS(int u)
{
    stack<int> st;
    st.push(u); used[u]=1;
    cnt++;
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
                cnt++;
                break;
            }
        }
    }
}

void findTop()
{
    for(int u=1; u<=n; u++)
    {
        cnt=0;
        used[u]=1;
        for(int v=1; v<=n; v++)
            if(v!=u) {DFS(v); break;}
        if(cnt!=n-1) cout << u << " ";
        memset(used, 0, sizeof(used));
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        memset(x, 0, sizeof(x));
        memset(used, 0, sizeof(used));
        cnt=0;
        cin >> n >> m;
        int idx=0;
        while(idx<m)
        {
            int tmp1, tmp2; cin >> tmp1 >> tmp2;
            x[tmp1][tmp2]=x[tmp2][tmp1]=1;
            idx++;
        }
        findTop();
        cout << endl;
    }
    return 0;
}