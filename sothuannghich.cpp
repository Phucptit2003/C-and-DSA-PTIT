#include<iostream>
using namespace std;
int check(string s){
	int k=s.size();
	for(int i=0;i<k;i++){
		if(s[i]!=s[k-1-i]) return 0;
	}
	return 1;	
}
int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		if(check(s)==1) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
}

