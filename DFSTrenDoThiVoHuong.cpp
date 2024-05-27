#include<bits/stdc++.h>
using namespace std;

int used[1005];
int x[1005][1005];
int n;

void DFS(int u)
{
    stack<int> st;
    st.push(u); used[u]=1;
    cout << u << " ";
    while(!st.empty())
    {
        u=st.top();
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
        memset(used, 0, sizeof(used));
        memset(x, 0, sizeof(x));
        while(m--)
        {
            int tmp1, tmp2; cin >> tmp1 >> tmp2;
            x[tmp1][tmp2]=1;
            x[tmp2][tmp1]=1;
        }
        DFS(k);
        cout << endl;
    }
    return 0;
}