#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		long long n;
		cin>>n;
		for(int i=2;i<=n;i++){
			while(n%i==0){
			 	cout<<i<<" ";
			 	n=n/i;
			 }
		} cout<<"\n";
}
}
