#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	vector<string>v;
	string c="";
	for(int i=0;i<s.size();i++){
		if(s[i]!='.'){
			c+=s[i];
		} 
		if(s[i]=='.'||i==s.size()-1){
			v.push_back(c);
			c="";
		}
	}
	for(int i=v.size()-1;i>0;i--){
		cout<<v[i]<<".";
	}
	cout<<v[0];
}

