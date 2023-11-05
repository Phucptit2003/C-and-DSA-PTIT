#include<iostream>
using namespace std;
int ktra(int n){
	if(n<=1) return 0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int n;
	cin>>n;
	if(ktra(n)==1) cout<<n<<" la so nguyen to";
	else cout<<n<<" khong la so nguyen to";
}
