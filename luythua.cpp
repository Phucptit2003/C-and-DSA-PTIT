#include<bits/stdc++.h>

using namespace std;

long long P=1e9+7;
long long Mul(long long a,long long b){
	if(b==0) return 0;
	long long tmp=Mul(a,b/2);
	if(b%2==1) return (tmp*2+a)%P;
	return tmp*2%P;
}
long long Pow(long long n,long long k){
	if(k==0) return 1;
	if(k==1) return n%P;
	long long tmp=Pow(n,k/2);
	long long a=Mul(tmp,tmp);
	if(k%2==1) return a*n%P;
	else return a%P;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		long long n,k;
		cin>>n>>k;
		cout<<Pow(n,k)<<endl;
	}
}

