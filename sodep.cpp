#include<bits/stdc++.h>
using namespace std;
int check(string s){
	int len=s.size();
	for(int i=0;i<s.size();i++){
		if(s[i]%2!=0) return 0;
		if(s[i]!=s[len-1-i]) return 0;
	} return 1;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin.ignore();
		string s;
		cin>>s;
		if(check(s)==1) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
