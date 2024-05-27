#include<bits/stdc++.h>
using namespace std;

long long Max(string a)
{
    for(char &x : a) if(x=='5') x='6';
    return stoll(a);
}

long long Min(string a)
{
    for(char &x : a) if(x=='6') x='5';
    return stoll(a);
}

int main()
{
    string a, b; cin >> a >> b;
    cout << Min(a)+Min(b) << " " << Max(a)+Max(b) << endl;
    return 0;
}