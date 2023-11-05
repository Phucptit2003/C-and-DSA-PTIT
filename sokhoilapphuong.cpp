#include<bits/stdc++.h>

using namespace std;
vector<long long>v;
string check(string s){
	string tmp;
	for(long long &i:v){
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
	int test;
	cin>>test;
	for(int i=1e2;i>=0;i--) v.push_back(i*i*i);
	while(test--){
		string s;
		cin>>s;
		cout<<check(s)<<endl;
	}
}

