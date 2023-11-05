#include<bits/stdc++.h>
using namespace std;
int main(){
 int test;
 cin>>test;
 while(test--){
 	string s;
 	cin>>s;
 	map<char,int>p;
 	vector<char>v;
 	for(char x:s){
 		p[x]++;
 		v.push_back(x);
	 }
	 for(int i=0;i<v.size();i++){
	 	if(p[s[i]]!=0){
	 		cout<<s[i]<<p[s[i]];
	 		p[s[i]]=0;
		 }
	 }
	 cout<<endl;
 }
}

