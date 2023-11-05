#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	stack<char>st,st1;
	int ind;
	for(int i=0;i<s.size();i++){
		if(s[i]=='-'){
			if(st.size()!=0)
				st.pop();
		}
		else if(s[i]=='<'){
			if(st.size()!=0){
				char c=st.top();
				st.pop();
				st1.push(c);
			}
		}
		else if(s[i]=='>'){
			if(st1.size()!=0){
				char c=st1.top();
				st1.pop();
				st.push(c);
			}
		}
		else {
			st.push(s[i]);
		}
	}
	while(st.size()){
		st1.push(st.top());
		st.pop();
	}
	while(st1.size()){
		cout<<st1.top();
		st1.pop();
	}
	cout<<endl;
}

