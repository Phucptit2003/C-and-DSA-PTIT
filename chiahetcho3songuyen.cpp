#include<bits/stdc++.h>
using namespace std;
long long check(long long a,long long b){
	return (a*b)/(__gcd(a,b));
}
int main(){
	int test;
	cin>>test;
	while(test--){
		long long x,y,z,n;
		cin>>x>>y>>z>>n;
		long long c=check(x,check(y,z));
		long dau=pow(10,n-1);
		long long cuoi=pow(10,n);
		long long a=dau/c;
		long long b=cuoi/c;
		if(a<1&&b<1){
			cout<<"-1\n";
			continue;
		}
		if(a*c<dau){
			a++;
			cout<<a*c<<endl;
		} else cout<<a*c<<endl;
	}
}
