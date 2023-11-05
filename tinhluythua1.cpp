#include<bits/stdc++.h>
using namespace std;
int P=1e9+7;
int main(){
	while(1){
		long long n,k;
		cin>>n>>k;
		if(n==0&&k==0) break;
		long long tich=1;
		for(int i=1;i<=k/2;i++){
			tich=tich*n;
			tich=tich%P;
		}
		if(k%2==0){
			tich=tich*tich;
		} else{
			tich=(n%P)*tich*tich;
		}
		cout<<tich%P<<endl;
	}
}
