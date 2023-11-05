#include<bits/stdc++.h>

using namespace std;
const long long P=1e9+7;
long long Pow(long long n,long long k){
	if(k==0) return 1;
	if(k==1) return n%P;
	long long tmp=Pow(n,k/2)%P;
	tmp=(tmp*tmp)%P;
	if(k%2==1) return tmp*n%P;
	else return tmp%P;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		long long n;
		cin>>n;
		long long t=n;
		long long r=0;
		while(n>0){
			r=r*10+n%10;
			n/=10;
		}
		cout<<Pow(t,r)<<endl;
	}
}

