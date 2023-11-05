#include<bits/stdc++.h>

using namespace std;

int main(){
	int a[20];
	int i,j;
	a[1]=9;
	a[2]=9;
	for(int i=3,j=4;i<=15||j<=16;i=i+2,j=j+2){
		a[i]=a[i-2]*10;
		a[j]=a[i];
	}
	int n;
	while(cin>>n){
		cout<<a[n]<<endl;
	}
}

