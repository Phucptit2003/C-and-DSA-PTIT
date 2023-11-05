#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		long long n;
		cin>>n;
		if(n==0||n==1) {
			cout<<"YES\n";
			continue;
		}
		long long f0=0;
		long long f1=1;
		long long fn=1;
		while(fn<n){
		fn=f0+f1;f0=f1;f1=fn;
	}
			if(fn==n) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}

