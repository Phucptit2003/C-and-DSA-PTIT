#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int k,x;
		cin>>k>>x;
		int dem=0;
		int t=k/2;
		for(int i=0;i<n;i++){
			if(a[i]==x){
				for(int j=1;j<=t;j++){
				cout<<a[i-1-j+1]<<" ";
				cout<<a[i+1+j-1]<<" ";
			}}}
			cout<<endl;
		}
	}
