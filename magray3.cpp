#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		cout<<s[0];
		int tmp=s[0]-'0',x;
		for(int i=1;i<s.size();i++){
			x=s[i]-'0';
			if(x!=tmp){
				cout<<1;
			}
			else cout<<0;
			tmp=s[i]-'0';
		}
		cout<<endl;
	}
}

