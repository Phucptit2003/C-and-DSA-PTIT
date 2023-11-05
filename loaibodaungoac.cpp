#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		scanf("\n");
		string s;
		getline(cin,s);
		vector<queue<char>>ve;
		queue<char>st;
		int dem=0;
		bool check=false;
		int demdau=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='('){
				if(check==true){
					st.push(s[i]);
					dem+=1;
					check=false;
					demdau+=1;
				}
			}
			else if(s[i]=='-' || s[i]=='+'){
				st.push(s[i]);
				if(s[i]=='-') check=true;
				demdau+=1;
			}
			else if(isalpha(s[i])){
				st.push(s[i]);
			}
			else if(s[i]==')'){
				if (dem>0 && demdau>0){
					st.push(s[i]);
					dem-=1;
					demdau-=1;
				}
			}
		}
		while(!st.empty()){
			cout<<st.front();
			st.pop();
		}
	}
}

