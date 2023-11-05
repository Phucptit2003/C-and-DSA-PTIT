#include<bits/stdc++.h>
using namespace std;
bool check1(string s){
	if(s[9]<s[10]){
		for(int i=5;i<=6;i++){
			if(s[i]>=s[i+1]) return false;
		}
	} else return false;
	return true;
}
bool check2(string s){
	if(s[9]==s[10]){
		for(int i=5;i<=6;i++){
			if(s[i]!=s[i+1]||s[i]!=s[9]) return false;
		}
	} else return false;
	return true;
}
bool check3(string s){
	if(s[9]==s[10]){
		for(int i=5;i<=6;i++){
			if(s[i]!=s[i+1]) return false;
		}
	}else return false;
	return true;
}
bool check4(string s){
	for(int i=9;i<=10;i++) 
	if(s[i]!='6'&&s[i]!='8') return false;
	for(int i=5;i<=7;i++){
	if(s[i]!='6'&&s[i]!='8') return false;
	}
	return true;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		if(check1(s)||check2(s)||check3(s)||check4(s))
		cout<<"YES\n";
		else cout<<"NO\n";
	}
}
