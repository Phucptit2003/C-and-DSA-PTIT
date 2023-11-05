#include<bits/stdc++.h>
using namespace std;
int check(string s){
	if(s[0]=='0') return -1;
	set<char>se;
	for(char x:s){
		if(!isdigit(x)) return -1;
		se.insert(x);
	}
	return se.size()==10;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		if(check(s)==-1) cout<<"INVALID\n";
		else if(check(s)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
