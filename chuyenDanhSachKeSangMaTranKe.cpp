#include<bits/stdc++.h>
using namespace std;

int x[1005][1005]={0};

int main()
{
    int n; cin >> n;
    string s;
    for(int i=0; i<n; i++)
    {
        scanf("\n"); getline(cin, s);
        stringstream ss(s);
        string token;
        while(ss >> token)
          x[stoi(token)][i+1]=x[i+1][stoi(token)]=1;
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++) cout << x[i][j] << " ";
        cout << endl;
    }
    return 0;
}