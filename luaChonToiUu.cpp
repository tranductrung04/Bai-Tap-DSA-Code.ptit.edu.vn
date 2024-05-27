#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	return a.second < b.second;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        pair<int, int> p[100005];
        for(int i=0; i<n; i++)
        {
            int tmp1, tmp2; cin >> tmp1 >> tmp2;
            p[i] = make_pair(tmp1, tmp2);
        }
        sort(p, p+n, cmp);
        int j=0, cnt=1;
        for(int i=1; i<n; i++)
        {
            if(p[i].first>=p[j].second) {j=i; cnt++;}
        }
        cout << cnt << endl;
    }
    return 0;
}
