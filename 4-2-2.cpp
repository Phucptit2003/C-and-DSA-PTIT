#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin,s);
	vector<char>v;
	for(int i=0;i<s.size();i++){
		if(s[i]>='0'&&s[i]<='9'){
			v.push_back(s[i]);
		}
	}
	if(v[0]-'0'+v[1]-'0'==v[2]-'0'){
		cout<<"YES\n";
	}
	else cout<<"NO\n";
}

