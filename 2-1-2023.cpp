#include<bits/stdc++.h>

using namespace std;
long long check(int k,int n){
	long long tich=1;
	for(int i=1;i<=n;i++){
		tich=tich*k;
	}
	return tich;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int k;
		cin>>k;
		long long sum=0;
		for(int i=1;i<=10;i++){
			sum+=8/check(1+k,i);
		}
		sum+=10/check(1+k,10)-92;
		cout<<sum<<endl;
	}
	cout<<check(2,3);
}

