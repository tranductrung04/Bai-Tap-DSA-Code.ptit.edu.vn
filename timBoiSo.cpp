#include<bits/stdc++.h>
using namespace std;

vector<string> res;
string ans[505];
 
void init()
{
    queue<string> q;
    q.push("9");
    res.push_back("9");
    while(1)
    {
        string top = q.front();
        q.pop();
        if(top.size()==17) break;
        res.push_back(top+"0");
        res.push_back(top+"9");
        q.push(top+"0");
        q.push(top+"9");
    }
    for(int i=1; i<=500; i++)
    {
        for(auto &x : res) 
            if(stoll(x) % i == 0)
            {
                ans[i]=x;
                break;
            } 
    }
}
 
int main()
{
    init();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout << ans[n] << endl;
    }
    return 0;
}