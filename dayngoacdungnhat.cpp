#include<bits/stdc++.h>

using namespace std;
void check(stack<char>st, char x){
	if(st.empty()==true) return ;
	st.pop();
	return ;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		int dem=0;
		stack<char>st;
		for(char x:s){
			if(x=='('){
				st.push(x);
			}
			else{
				check(st,x);
			}
		}
		cout<<s.size()-st.size()<<endl;
	}
}

