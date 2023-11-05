#include<bits/stdc++.h>
using namespace std;
string check(string a){
	for(int i=0;i<a.length();i++){
		a[i]=tolower(a[i]);
	}
	return a;
}
int main(){
	string s;
	getline(cin,s);
	string c;
	stringstream ss(s);
	vector<string>v;
	while(ss>>c) v.push_back(c);
	int len=v.size();
	cout<<check(v[len-1]);
	for(int i=0;i<len-1;i++){
		cout<<(char)tolower(v[i][0]);
	}
	cout<<"@ptit.edu.vn";
}
