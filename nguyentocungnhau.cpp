#include<bits/stdc++.h>
using namespace std;
bool check(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int dem=0;
		for(int i=1;i<=n;i++){
			if(__gcd(i,n)==1) dem++;
		}
		if(check(dem)) cout<<"1\n";
		else cout<<"0\n";
	}
}
