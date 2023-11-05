#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string &s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
}
void viethoa(string &s){
	for(int i=0;i<s.length();i++){
		s[i]=toupper(s[i]);
	}
}
int main(){	
		string s;
		getline(cin,s);
		stringstream ss(s);
		vector<string>v;
		string c;
		while(ss>>c) v.push_back(c);
		for(int i=0;i<v.size()-1;i++){
			chuanhoa(v[i]);
			cout<<v[i];
			if(i==v.size()-2) cout<<", ";
			else cout<<" ";
		}viethoa(v[v.size()-1]);
		cout<<v[v.size()-1];
	}

