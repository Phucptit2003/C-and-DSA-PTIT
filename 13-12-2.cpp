#include<bits/stdc++.h>

using namespace std;
void Chuanhoa(string c){
	for(int i=0;i<c.size();i++){
		c[i]=tolower(c[i]);
	}
}
int main(){
	string s;
	string t;
	getline(cin,s);
	getline(cin,t);
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	for(int i=0;i<t.size();i++){
		t[i]=tolower(t[i]);
	}
	set<string>s1,s2;
	stringstream ss(s);
	string c;
	while(ss>>c){
		s1.insert(c);
	}
	stringstream ss1(t);
	string c1;
	while(ss1>>c1){
		s2.insert(c1);
	}
	for(auto x:s1){
		if(s2.count(x)==0){
			cout<<x<<" ";
		}
	}
}

