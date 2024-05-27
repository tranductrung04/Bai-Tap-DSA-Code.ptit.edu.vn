#include<bits/stdc++.h>
using namespace std;

int k;
string s;
int max_idx = 0, j=0;

void Try(int i)
{
    if(i==s.size()) 
    { 
        if(s[max_idx]>s[j]) {swap(s[max_idx], s[j]); k--;}
        j++;
        max_idx=j;
        i=j+1;
    }
    if(j>=s.size()-1) return;
    if(!k) return;
    if(s[i]>=s[max_idx]) max_idx = i;
    Try(i+1);
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        j=0; max_idx = 0;
        cin >> k >> s;
        Try(1);
        cout << s << endl;
    }
    return 0;
}