#include<iostream>
using namespace std;
int check(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	} return 1;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int check1=0;
		for(int i=2;i<=n/2;i++){
			if(check(i)==1&&check(n-i)==1){
				cout<<i<<" "<<n-i<<endl;
				check1=1;
				break;
			}
		}
		if(check1==0) cout<<"-1\n";
	}
}
