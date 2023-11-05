#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		string s;
		set<char>se;
		for(int i=0;i<n;i++){
			cin>>s;
			for(int i=0;i<s.size();i++){
				se.insert(s[i]);
			}
		}
		for(auto x:se){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}

