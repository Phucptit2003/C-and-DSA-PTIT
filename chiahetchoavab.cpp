#include<bits/stdc++.h>
using namespace std;
long long check(long a,long b){
	return ((a*b)/__gcd(a,b));
}
int main(){
	int test;
	cin>>test;
	while(test--){
		long long m,n,a,b;
		cin>>m>>n>>a>>b;
		long long dem1=0,dem2=0,dem3=0;
		for(long long i=m;i<=n;i++){
			if(i%(check(a,b))==0) dem1++;
			else if(i%a==0) dem2++;
			else if(i%b==0) dem3++;
		}
		cout<<dem1+dem2+dem3<<endl;
	}
}
