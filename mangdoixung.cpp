#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Nhap so phan tu cua mang:";
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]!=a[n-1-i]){
			cout<<"Mang khong doi xung!!";
			return 0;
		}
	}
	cout<<"Mang doi xung";
}
