#include<bits/stdc++.h>
using namespace std;
bool check(long long n){
	if(n<2) return false;
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		long long n;
		cin>>n;
		long long dem=0;
		for(long long i=2;i<=sqrt(n);i++){
			if(check(i)) dem++;
		}
		cout<<dem<<endl;
	}
}
