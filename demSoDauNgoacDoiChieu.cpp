#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        stack<char> st;
        long long cnt1=0, cnt2=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(') st.push(s[i]);
            else if(!st.empty()) st.pop();
            else cnt1++;
        }
        while(!st.empty())
        {
            st.pop();
            cnt2++;
        }
        if(cnt2==cnt1)
        {
            if(cnt1%2==0) cout << cnt1 << endl;
            else cout << cnt1+1 << endl;
        }
        else if(cnt2>cnt1) 
        {
            if(cnt1%2==0) cout << (cnt2-cnt1)/2+cnt1 << endl;
            else cout << (cnt2-cnt1)/2+cnt1+1 << endl;
        }
        else 
        {
            if(cnt2%2==0) cout << (cnt1-cnt2)/2+cnt2 << endl;
            else cout << (cnt1-cnt2)/2+cnt2+1 << endl;
        }   
    }
    return 0;
}