#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
		cin.ignore();map<string,int>mp;
	for(int i=1;i<=n;i++){
	
		string s;
		getline(cin,s);
		
		for(int i=0;i<s.length();i++){
		s[i]=tolower(s[i]);
	}string res="";
		stringstream ss(s);
		vector<string>v;
		
		string c;
		while(ss>>c) v.push_back(c);
		res+=v[v.size()-1];
		for(int i=0;i<v.size()-1;i++){
			res+=v[i][0];
		}
		if(mp[res]==0){
			cout<<res<<"@ptit.edu.vn"<<endl;;
		}else{
			cout<<res<<mp[res]+1<<"@ptit.edu.vn"<<endl;
		}
		mp[res]++;
	}
}
