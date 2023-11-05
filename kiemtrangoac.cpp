#include<bits/stdc++.h>

using namespace std;
bool check1(char a,char b){
	if((a=='('&&b==')')||(a=='['&&b==']')||(a=='{'&&b=='}')){
		return true;
	}
	return false;
}
void Tinh(){
		string s;
		cin>>s;
		stack<char>st;
		bool check=true;
		for(char x:s){
			if(x=='('||x=='{'||x=='['){
				st.push(x);
			}
			else{
				if(st.size()==0){
					cout<<"false\n";
					return;
				}
				if(!st.empty() && check1(st.top(),x)){
					st.pop();
				}
				else{
					cout<<"false\n";
					return;
				}
			}
		}
		if(st.size()==0) cout<<"true\n";
		else cout<<"false\n";
}
int main(){
	int test;
	cin>>test;
	while(test--){
	 	Tinh();
	}
}

