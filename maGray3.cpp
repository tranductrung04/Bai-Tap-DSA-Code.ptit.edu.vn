#include<bits/stdc++.h>
using namespace std;

char xor_c(char a, char b)
{
    return (a==b)?'0':'1';
}

string binaryToGray(string b)
{
    string g="";
    g+=b[0];
    for(int i=1; i<b.size(); i++)
        g+=xor_c(b[i], b[i-1]);
    return g;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string b; cin >> b;
        cout << binaryToGray(b) << endl;
    }
    return 0;
}