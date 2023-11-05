#include<bits/stdc++.h>

using namespace std;
bool check1(char a,char b){
	if((a=='('&&b==')')||(a=='['&&b==']')||(a=='{'&&b=='}')){
		return true;
	}
	return false;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		stack<char>st;
		bool check=true;
		for(char x:s){
			if(x=='('||x=='{'||x=='['){
				st.push(x);
			}
			else{
				if(st.empty()){
					cout<<"NO\n";
					check=false;
					break;
				}
				char tmp=st.top();
				if(check1(st.top(),x)){
					st.pop();
				}
				else{
					cout<<"NO\n";
					check=false;
					break;
				}
			}
		}
		if(check==true) cout<<"YES\n";
	}
}

