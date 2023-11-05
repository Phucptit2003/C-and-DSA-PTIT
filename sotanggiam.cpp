#include<bits/stdc++.h>
using namespace std;
bool tang(int n){
	int x1=n%10;
	n/=10;
	while(n>0){
		int x2=n%10;
		if(x1<=x2) return false;
		n/=10;
		x1=x2;
	}
	return true;
}
bool giam(int n){
	int x1=n%10;
	n/=10;
	while(n>0){
		int x2=n%10;
		if(x1>=x2) return false;
		n/=10;
		x1=x2;
	}
	return true;
}
bool nto(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) {
		return false;
		break;}
	}
	return true;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		 cin>>n;
		 int dem=0;
		 int dau=1;
		 int cuoi=1;
		 int i=1;
		 while(i<n){
		 	dau*=10;
		 	i++;
		 }
		 i=1;
		 while(i<n+1){
		 	cuoi*=10;
		 	i++;
		 }
		for(int j=dau;j<cuoi;j++){
			if(tang(j)||giam(j)){
				if(nto(j)) dem++;
			}
		}
		cout<<dem<<endl;
	}
}

