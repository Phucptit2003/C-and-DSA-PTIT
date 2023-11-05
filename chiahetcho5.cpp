#include<iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		int k=s.size();
		long long temp=(s[k-1]-'0')%5;
		long long it=1;
		for(int i=k-2;i>=0;i--){
			it=it*2;
			it=it%5;
			temp+=(s[i]-'0')*it;
			temp%=5;
		}
		if(temp==0) cout<<"Yes\n";
		else cout<<"No\n";
	}
}
