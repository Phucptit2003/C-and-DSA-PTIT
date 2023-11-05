#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		stack<char>st;
		int dem=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='(') st.push(s[i]);
			else{
				if(!st.empty()){
					dem+=2;
					st.pop();
				}				
			}
		}
		cout<<dem<<endl;
	}
}

