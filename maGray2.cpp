#include<bits/stdc++.h>
using namespace std;

char flip(char a) 
{
    return (a=='0') ? '1' : '0';
}

string grayToBinary(string g)
{
    string b="";
    b+=g[0];
    for(int i=1; i<g.size(); i++)
    {
        if(g[i]=='0') b+=b[i-1];
        else b+=flip(b[i-1]);
    }
    return b;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string g; cin >> g;
        cout << grayToBinary(g) << endl;
    }
    return 0;
}