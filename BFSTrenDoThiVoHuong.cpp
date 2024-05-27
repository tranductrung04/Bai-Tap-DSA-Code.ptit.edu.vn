#include<bits/stdc++.h>
using namespace std;

int n;
int x[1005][1005], used[1005];

void BFS(int u)
{
    queue<int> q;
    q.push(u); used[u]=1;
    cout << u << " ";
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(int v=1; v<=n; v++)
        {
            if(!used[v] && x[u][v])
            {
                used[v]=1;
                q.push(v);
                cout << v << " ";
            }
        }
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        memset(x, 0, sizeof(x));
        memset(used, 0, sizeof(used));
        int m, k; cin >> n >> m >> k;
        while(m--)
        {
            int tmp1, tmp2; cin >> tmp1 >> tmp2;
            x[tmp1][tmp2]=x[tmp2][tmp1]=1;
        }
        BFS(k);
        cout << endl;
    }
    return 0;
}