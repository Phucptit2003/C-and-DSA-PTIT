#include<bits/stdc++.h>

using namespace std;
bool check(char &a,char &b){
	if(a=='['&&b==']') return true;
	if(a=='('&&b==')') return true;
	if(a=='{'&&b=='}') return true;
	return false;
}
int main(){
	int test;
	cin>>test;
	cin.ignore();
	while(test--){
		string s;
		cin>>s;
		stack<char>st;
		for(int i=0;i<s.size();i++){
			if(s[i]=='{'||s[i]=='['||s[i]=='('){
				st.push(s[i]);
			}
			else if(check(st.top(),s[i])){
				st.pop();
			}
		}
		if(st.size()==0) cout<<"true"<<endl;
		else cout<<"false"<<endl;
	}
}

