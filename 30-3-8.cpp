#include<bits/stdc++.h>

using namespace std;
vector<long long>v;

string check(string s){
	string tmp="";
	for(auto i:v){
		tmp=to_string(i);
		int id=0;
		for(char j:s){
			if(j==tmp[id]) id++;
			if(id==tmp.size()) return tmp;
		}
	}
	return to_string(-1);
}
int main(){
	for(int i=100;i>=0;i--){
		v.push_back(i*i*i);
	}
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		cout<<check(s)<<endl;
	}
}

