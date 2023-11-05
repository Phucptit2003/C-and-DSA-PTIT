#include<bits/stdc++.h>
using namespace std;
int n,a[20];
void xuat(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	} cout<<" ";
}
void sinh(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n) xuat();
		else sinh(i+1);
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n;
		sinh(1);
		cout<<endl;
	}
}
