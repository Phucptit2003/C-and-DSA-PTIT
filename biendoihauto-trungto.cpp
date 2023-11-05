#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		stack<string>st;
		for(int i=0;i<s.size();i++){
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
				string c="("+s2+s[i]+s1+")";
				st.push(c);
			}
		}
		cout<<st.top()<<endl;
	}
	return 0;
}

