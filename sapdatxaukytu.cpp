#include<bits/stdc++.h>

using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		map<char,int>mp;
		for(auto x:s){
			mp[x]++;
		}
		int d=0;
		for(int i=0;i<s.size();i++){
//			cout<<mp[s[i]]<<endl;
			if(mp[s[i]]>d) d=mp[s[i]];
		}
		if(s.size()-d>=d-1) cout<<1<<endl;
		else cout<<-1<<endl;
	}
}

