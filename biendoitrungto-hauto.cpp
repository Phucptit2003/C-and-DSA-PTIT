#include<bits/stdc++.h>

using namespace std;
int Uutien(char x){
	if(x=='^') return 3;
	if(x=='*'||x=='/') return 2;
	if(x=='+'||x=='-') return 1;
	return 0;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		stack<char>st;
		string ans="";
		for(char x:s){
			if(isalpha(x)){
				ans+=x;
			}
			else{
				if(x=='(') st.push(x);
				else if(x==')'){
					while(!st.empty()&&st.top()!='('){
						ans+=st.top();
						st.pop();
					}
					st.pop();
				}
				else{
					while(!st.empty()&&Uutien(st.top())>=Uutien(x)){
						ans+=st.top();
						st.pop();
					}
					st.push(x);
				}
			}
		}
		while(!st.empty()){
			ans+=st.top();
			st.pop();
		}
		cout<<ans<<endl;		
	}
}

