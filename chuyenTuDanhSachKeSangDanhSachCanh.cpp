#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    pair<int, int> p[1005];
    string tmp;
    int idx=0;
    for(int i=0; i<n; i++)
    {
        scanf("\n"); getline(cin, tmp);
        stringstream ss(tmp);
        string token;
        while(ss >> token)
            if(i+1<stoi(token)) p[idx++] = make_pair(i+1, stoi(token));
    }
    for(int i=0; i<idx; i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }
    return 0;
}