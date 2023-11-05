#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		long long m;
		cin>>m;
		int sum=0;
		for(int i=0;i<s.size();i++){
			int t=s[i]-'0';
			sum=sum*10+t;
			sum%=m;
		}
		cout<<sum<<endl;
	}
}
