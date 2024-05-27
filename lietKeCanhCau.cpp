#include<bits/stdc++.h>
using namespace std;

int n, m, x[1005][1005], used[1005];
pair<int, int> p[100005];
int cnt=0;
vector<pair<int, int>> res;

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

void findBright()
{
    for(int i=0; i<m; i++)
    {
        cnt=0;
        x[p[i].first][p[i].second]=x[p[i].second][p[i].first]=0;
        DFS(1);
        if(cnt!=n) res.push_back(p[i]);
        x[p[i].first][p[i].second]=x[p[i].second][p[i].first]=1;
        memset(used, 0, sizeof(used));
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        res.clear();
        memset(x, 0, sizeof(x));
        memset(used, 0, sizeof(used));
        memset(p, 0, sizeof(p));
        cnt=0;
        cin >> n >> m;
        int idx=0;
        while(idx<m)
        {
            int tmp1, tmp2; cin >> tmp1 >> tmp2;
            p[idx++]=make_pair(tmp1, tmp2);
            x[tmp1][tmp2]=x[tmp2][tmp1]=1;
        }
        findBright();
        sort(res.begin(), res.end());
        for(auto x : res) cout << x.first << " " << x.second << " ";
        cout << endl;
    }
    return 0;
}