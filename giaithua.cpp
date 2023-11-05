#include<iostream>
using namespace std;
int tinhgiaithua(int n){
	int tich=1;
	if(n<0) return -1;
	else if(n==0||n==1) return 1;
	else {
		for(int i=2;i<=n;i++){
			tich=tich*i;
	}
	return tich;}
}
int main(){
	int n;
	cin>>n;
	cout<<"Giai thua cua "<<n<<" la:"<<endl;
	cout<<tinhgiaithua(n);
}
