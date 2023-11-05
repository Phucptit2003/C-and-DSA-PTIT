#include<iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		int check=1;
		for(int i=0;i<s.size()-1;i++){
		if(s[i]!=s[i+1]+1&&s[i]!=s[i+1]-1){
			check=0;
			break;
		}
		}
		if(check==1) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
}}

