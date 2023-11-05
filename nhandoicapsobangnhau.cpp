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
		} int dem=0;
		for(int i=0;i<n-1;i++){
			if(a[i]==a[i+1]){
				a[i]=2*a[i];
				a[i+1]=0;
				dem++;
			}
		}
		for(int i=0;i<n;i++){
			if(a[i]>0){
				cout<<a[i]<<" ";
			}
		}
		for(int i=0;i<n;i++){
			if(a[i]==0){
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
}
