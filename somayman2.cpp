#include<bits/stdc++.h>
using namespace std;
int sum(string s){
	int sum=0;
	for(int i=0;i<s.size();i++){
		sum+=s[i]-48;
	}
	return sum;
}
int sum2(int n){
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		int x=200;
		int tong=sum(s);
		while(x--){
			tong=sum2(tong);
		}
		if(tong==9) cout<<"1\n";
		else cout<<"0\n";
}}
