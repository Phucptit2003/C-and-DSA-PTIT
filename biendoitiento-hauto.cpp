#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		stack<string>st;
		for(int i=s.size()-1;i>=0;i--){
			if(isalpha(s[i])){
				string tmp="";
				tmp+=s[i];
				st.push(tmp);
			}
			else{
				string s1=st.top();
				st.pop();
				string s2=st.top();
				st.pop();
				string ans=s1+s2+s[i];
//				cout<<ans<<endl;
				st.push(ans);
			}
		}
		while(!st.empty()){
			cout<<st.top();
			st.pop();
		}
		cout<<endl;
	}
}

