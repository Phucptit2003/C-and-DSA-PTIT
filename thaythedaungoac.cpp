#include<bits/stdc++.h>
using namespace std;
int n,m;
void solve()
{
    string s;
    cin>>s;
    stack<int> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(') st.push(i);
        else if(s[i]==')')
        {
            if(!st.empty())
            {
                s[i]='1';
                s[st.top()]='0';
                st.pop();
            }
            else s[i]='2';
        }
    }
    while(!st.empty())
    {
        s[st.top()]='2';
        st.pop();
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='2') cout<<"-1";
        else cout<<s[i];
    }
    cout<<'\n';
}
int main()
{
    int t=1;
    cin>>t;
    while(t--) solve();
}