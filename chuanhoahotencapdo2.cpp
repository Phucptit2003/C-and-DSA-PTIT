#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string &s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
}
int main(){
	int test;
	cin>>test;
	
	while(test--){
     	int t;
     	cin>>t;
		cin.ignore();
		string s;
		getline(cin,s);
		stringstream ss(s);
		vector<string> v;
		string c;
		while(ss>>c) v.push_back(c);
		for(int i=0;i<v.size();i++){
		chuanhoa(v[i]);
	} if(t==1){
	cout<<v[v.size()-1]<<" ";
	for(int i=0;i<v.size()-1;i++){
		cout<<v[i]<<" ";
	}
}
    if(t==2){
    	for(int i=1;i<v.size();i++){
    		cout<<v[i]<<" ";
		}
		cout<<v[0]<<" ";
	}
	cout<<endl;
}
}
