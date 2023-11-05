#include<bits/stdc++.h>

using namespace std;

void Chuanhoa(string s){
	stringstream ss(s);
	string c;
	vector<string>v1;
	while(ss>>c){
		v1.push_back(c);
	}
	for(int i=0;i<v1.size();i++){
		v1[i]=tolower(v1[i]);
	}
}
int main(){
	int n;
	cin>>n;
	vector<string>v;
	vector<string>v1;
	for(int i=0;i<n;i++){
		scanf("\n");
		string s;
		getline(cin,s);
		v.push_back(s);
	}
	for(int i=0;i<v.size();i++){
		Chuanhoa(v[i]);
	}
	for(int i=0;i<v.size()-1;i++){
		v1.push_back(v[i]);
	}
	v1.push_back(v[v.size()-1]);
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
	cout<<endl;
}

