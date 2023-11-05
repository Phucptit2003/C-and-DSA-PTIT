#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		cin.ignore();
		string s;
		getline(cin,s);
		set<char>v;
		int k;
		cin>>k;
		for(char x:s) v.insert(x);
		if(26-v.size()<=k) cout<<"1\n";
		else cout<<"0\n";
			}
}
