#include<bits/stdc++.h>
using namespace std;
int check(long long n){
	long long f0=0,f1=1,fn=1;
//	if(n<2) return n;
	while(fn<n){
		fn=f0+f1;
		f0=f1;
		f1=fn;
	}
	if(fn==n) return 1;
	return 0;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(a[i]==0) cout<<a[i]<<" ";
			if(check(a[i])==1) cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
