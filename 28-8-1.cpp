#include<bits/stdc++.h>
using namespace std;
unsigned long long check(long long n){
	return (n*(n+1)/2)%998244353;
}
signed long long check1(long long n){
	return (n*(n+1)/2);
}
int main(){
	int test;
	cin>>test;
	while(test--){
		long long a,b,c;
		cin>>a>>b>>c;
		cout<<(unsigned long long)check(a)*check1(b)*check1(c);
		cout<<endl;
	}
}
