#include<bits/stdc++.h>
using namespace std;
#define P 1000000007
long long tinhgt(long long n,long long r){
	long long sum=1;
	for(int i=r+1;i<=n;i++){
		sum*=i;
	} return sum%P;
}
long long gt2(long long n){
	long long tich=1;
	for(int i=1;i<=n;i++){
		tich*=i;
	} return tich;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		long long n,r;
		cin>>n>>r;
		cout<<(long long)tinhgt(n,r)/gt2(n-r)<<endl;;
	}
}
