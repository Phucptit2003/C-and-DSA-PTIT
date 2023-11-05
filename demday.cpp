#include<bits/stdc++.h>

using namespace std;
long long const P=123456789;
long long sqr(long long x){
	return x*x;
}
long long Solve(long long n){
	if(n==0) return 1;
	if(n==1) return 2;
	long long tmp=Solve(n/2);
	if(n%2==0) return (tmp%P*tmp%P)%P;
	else return 2*(sqr(tmp)%P)%P;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		long long n;
		cin>>n;
		n-=1;
		cout<<Solve(n)<<endl;
	}
}

