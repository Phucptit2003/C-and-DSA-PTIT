#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	cin.ignore();
	while(test--){
		
		string s;
		getline(cin,s);
		stringstream ss(s);
		string tmp;
		vector<string>v;
		while(ss>>tmp){
			v.push_back(tmp);
		}
		for(int i=v.size()-1;i>=0;i--){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}
