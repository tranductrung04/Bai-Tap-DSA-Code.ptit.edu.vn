#include<bits/stdc++.h>
using namespace std;

int solve(int n)
{
    queue<pair<int, int>> q;
    set<int> s;
    s.insert(n);
    q.push({n, 0});
    while(!q.empty())
    {
        pair<int, int> top = q.front();
        q.pop();
        if(top.first==1) return top.second;
        if(top.first%3==0 && top.first/3==1) return top.second+1 ;
        if(top.first%2==0 && top.first/2==1) return top.second+1;
        if(top.first-1==1) return top.second+1;
        if(top.first%3==0 && s.find(top.first/3)==s.end())
        {
            s.insert(top.first/3);
            q.push({top.first/3, top.second+1});
        } 
        if(top.first%2==0 && s.find(top.first/2)==s.end())
        {
            s.insert(top.first/2);
            q.push({top.first/2, top.second+1});
        } 
        if(s.find(top.first-1)==s.end())
        {
            s.insert(top.first-1);
            q.push({top.first-1, top.second+1});
        } 
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}