#include<bits/stdc++.h>
using namespace std;

void input(vector<long long> &a, int n)
{
    for(int i=0; i<n; i++) 
    {
        long long tmp; cin >> tmp;
        a.push_back(tmp);
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        vector<long long> a, b, c;
        input(a, n1); input(b, n2); input(c, n3);
        int x=0, y=0, z=0;
        multiset<long long> s;
        while(x<n1 && y<n2 && z<n3)
        {
            if(a[x]==b[y] && b[y]==c[z])
            {
                s.insert(a[x]);
                x++; y++; z++;
            }
            else if(a[x]<b[y]) x++;
            else if(b[y]<c[z]) y++;
            else z++;
        }
        if(s.empty()) cout << -1;
        else for(auto i : s) cout << i << " ";
        cout << endl;
    }
    return 0;
}