#include<bits/stdc++.h>
using namespace std;
long long gcd(long long &a,long long &b){
	return __gcd(a,b);
}
int main(){
int test;
cin>>test;
while(test--){
	long long a,b;
	cin>>a>>b;
	long long l=(a*b)/gcd(a,b);
	cout<<l<<" "<<gcd(a,b)<<endl;
}
}

