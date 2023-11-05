#include<bits/stdc++.h>

using namespace std;


long long int Tinh(int n,int k){
	long long int result=n;
	for(int i=1;i<=k;i++){
		result=result+result%100;
	}
	return result;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		long long int x,k;
		cin>>x>>k;
		long long int result=Tinh(x,k);
		cout<<result<<endl;
	}
}

