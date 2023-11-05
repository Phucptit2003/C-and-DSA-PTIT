#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string &s){
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
}
bool cmp(string &a,string &b){
	return a<b;
}
int main(){
    ifstream f;
    ifstream g;
    f.open("DATA1.in");
    g.open("DATA2.in");
    string s;
    vector<string>v;
    while(f>>s){
    	v.push_back(s);
	}
	string s1;
    vector<string>v1;
    while(g>>s1){
    	v1.push_back(s1);
	}
	vector<string>v2;
	vector<string>v3;
	for(int i=0;i<v.size();i++){
		chuanhoa(v[i]);
	}
	for(int i=0;i<v1.size();i++){
		chuanhoa(v1[i]);
	}
	sort(v.begin(),v.end(),cmp);
	v2.push_back(v[0]);
	sort(v1.begin(),v1.end(),cmp);
	v3.push_back(v1[0]);
	vector<string>v5;
	v5.push_back(v[0]);
	for(int i=1;i<v.size();i++){
		if(v[i]!=v[i-1]){
			v2.push_back(v[i]);
			v5.push_back(v[i]);
		}
	}
	
	v5.push_back(v1[0]);
	for(int i=1;i<v1.size();i++){
		if(v1[i]!=v1[i-1]){
			v3.push_back(v1[i]);
			v5.push_back(v1[i]);
	    }
	}
	sort(v5.begin(),v5.end());
	vector<string>v4;	
	for(int i=0;i<v2.size();i++){
		for(int j=0;j<v3.size();j++){
		if(v2[i]==v3[j]){
			v4.push_back(v2[i]);
		   }	
		}
	} 
    cout<<v5[0]<<" ";
    for(int i=1;i<v5.size();i++){
    	if(v5[i]!=v5[i-1]) cout<<v5[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<v4.size();i++){
		cout<<v4[i]<<" ";
	}
}

