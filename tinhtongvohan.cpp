#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int x;
	cout<<"Nhap so x:";
	cin>>x;
	cout<<endl;
	int n;
	cout<<"Nhap so mu:";
	cin>>n;
	cout<<endl;
	int sum=0;
	int tich1=-1;
	int c=x;
	for(int i=1;i<=n;i++){
		tich1=tich1*(-1);
		sum+=tich1*x;
		x=x*c;
	} cout<<"Tong cac tich la: "<<sum<<endl;
}
