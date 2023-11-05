#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		map<char,int>v;
		for(char x:s){
			v[x]++;
		}
		for(char x:s){
			if(v[x]==1) cout<<x;
		}
		cout<<endl;
	}
}
