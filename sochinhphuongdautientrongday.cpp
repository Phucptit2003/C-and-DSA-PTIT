#include<iostream>
#include<math.h>
using namespace std;
int check(int n){
	if(sqrt(n)==(int)sqrt(n)) return 1;
	else return 0;
}
int main(){
	int n;
	cout<<"Nhap so phan tu:";
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(check(a[i])==1){
		 cout<<a[i]<<endl;
		 break;
	}
	}
}

