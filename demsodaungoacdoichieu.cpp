#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		stack<char>st;
		int open=0,close=0,ans=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='('){
				st.push(s[i]);
				open++;
			}
			else{
				if(!st.empty()&&st.top()=='('){
					st.pop();
					open--;
				}
				else{
					close++;
					st.push(s[i]);
				}
			}
		}
		ans=open/2+close/2;
		ans+=open%2+close%2;
		cout<<ans<<endl;
	}
}

