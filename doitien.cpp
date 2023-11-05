#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int dem=0;
		while(n>=1000) {
			n-=1000;
			dem++;
		}
		while(n>=500){
			n-=500;
			dem++;
		}
		while(n>=200){
			n-=200;
			dem++;
		}
		while(n>=100){
			n-=100;
			dem++;
		}
		while(n>=50){
			n-=50;
			dem++;	
		}
		while(n>=20){
			n-=20;
			dem++;
		}
		while(n>=10){
			n-=10;
			dem++;
		}
		while(n>=5){
			n-=5;
			dem++;
		}
		while(n>=2){
			n-=2;
			dem++;
		}
		while(n>=1){
			n-=1;
			dem++;
		}
		cout<<dem<<endl;
	}
}

