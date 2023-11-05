#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[1000000];
		for(int i=0;i<n;i++){
		cin>>a[i];
	} int so;
	int min=1000000;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
		if(abs(a[i]+a[j])<min){
			min=abs(a[i]+a[j]);
			so=a[i]+a[j];
		}
	}
} cout<<so<<endl;}
}
