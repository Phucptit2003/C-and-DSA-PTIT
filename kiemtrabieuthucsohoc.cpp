#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
//	cin.ignore();
	while(test--){
		scanf("\n");		
		string s;
		getline(cin,s);
		stack<char>st;
		char tmp;
		int check,res=0;
		for(char &i:s){
			if(i=='('){
				check=0;
				tmp=st.top();
				st.pop();
				while(tmp!=')'){
					if(tmp=='+'||tmp=='-'||tmp=='*'||tmp=='/') check=1;
					tmp=st.top();
					st.pop();
				}
				if(check==1){
					cout<<"Yes\n";
					res=1;
					break;
				}
			}
			else st.push(i);
		}
		if(res==0) cout<<"No\n";
	}
}

