#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin>>n;
	map<string,pair<string,bool>>mp;
	scanf("\n");
	for(int i=0;i<n;i++){
		string s;
		getline(cin,s);
		vector<string>v;
		stringstream ss(s);
		string c;
		while(ss>>c){
			v.push_back(c);
		}
		string msv=v[0],hoten="";
		for(int i=1;i<v.size();i++){
			hoten+=v[i]+" ";
		}
		hoten.pop_back();
		mp[msv].first=hoten;
		mp[msv].second=true;
	}
	cin>>m;
	set<string>s;
	for(int i=0;i<m;i++){
		string x,y,z,t;
		cin>>x>>y>>z>>t;
		if(t!="code.ptit.edu.vn"){
			mp[z].second=false;
		}
		if(t=="code.ptit.edu.vn"){
			s.insert(z);
		}
	}
	for(auto it:mp){
		cout<<it.first<<" "<<it.second.first<<" ";
		if(it.second.second==false||s.count(it.first)==0){
			cout<<"FAIL\n";
		}
		else cout<<"OK\n";
	}
}

