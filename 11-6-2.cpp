#include<bits/stdc++.h>

using namespace std;

int P=1e9+7;
long long Mul(long long a,long long b){
	if(b==0) return 0;
	long long tmp=Mul(a,b/2);
	if(b%2==1) return (tmp*2+a)%P;
	else return tmp*2%P;
}

long long Tinh(int n,int k){
	if(k==1) return n%P;
	if(k==0) return 1;
	long long t=Tinh(n,k/2);
	long long a=Mul(t,t);
	if(k%2==1) return a*n%P;
	else return a%P;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		cout<<Tinh(n,k)<<endl;
	}
}

