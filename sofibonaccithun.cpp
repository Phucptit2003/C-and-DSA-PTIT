#include<bits/stdc++.h>
using namespace std;
long long fibo(int n){
	long long f[1000];
	f[1]=1;
	f[2]=1;
	if(n<=2) return f[n];
	for(int i=3;i<=n;i++){
		f[i]=f[i-1]+f[i-2];
	}
	return f[n];
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		cout<<fibo(n)<<"\n";
	}
}
