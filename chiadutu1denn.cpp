#include<iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		long int n,k;
		cin>>n>>k;
		int sum=0;
		if(n>=0&&k>=0){
		for(int i=1;i<=n;i++){
			sum+=i%k;
		}
		cout<<sum<<endl;
	}
	}
}
