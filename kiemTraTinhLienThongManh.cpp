#include<bits/stdc++.h>
using namespace std;

int n, x[1005][1005], used[1005];
int cnt = 0;

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

bool check()
{
	for(int u=1; u<=n; u++)
	{
		DFS(u);
		if(cnt!=n) return false;
		memset(used, 0, sizeof(used));
		cnt=0;
	}
	return true;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
    	cnt=0;
        int m; cin >> n >> m;
        memset(x, 0, sizeof(x));
        memset(used, 0, sizeof(used));
        while(m--)
        {
            int tmp1, tmp2; cin >> tmp1 >> tmp2;
            x[tmp1][tmp2]=1;
        }       
		cout << ((check())?"YES":"NO") << endl;
    }
    return 0;
}
