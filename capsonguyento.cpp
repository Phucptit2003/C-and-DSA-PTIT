#include<iostream>
using namespace std;
int check(int n){
	if(n<2) return 0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}return 1;
}
int main(){
	int test;
	cin>>test;
	nhap:
	while(test--){
		int n;
		cin>>n;
		int check1=0;
		for(int i=2;i<=n;i++){
			if(check(i)==1&&check(n-i)==1){
				{ check1=1;
				 cout<<i<<" "<<n-i<<endl;
				 break;}
			}
		} if(check1==0) {
			cout<<endl;
		goto nhap ;}
	}
}
