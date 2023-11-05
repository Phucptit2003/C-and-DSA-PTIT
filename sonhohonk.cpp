#include<bits/stdc++.h>
using namespace std;
int check(int a[],int n,int k){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]<=k)dem++;
	}
//	cout<<dem<<endl;
	int dem1=0;
	for(int i=0;i<dem;i++){
		if(a[i]>k)dem1++;
	}
//	cout<<dem1<<endl;
	int dem2=dem1;
	for(int i=0,j=dem;j<n;j++,i++){
		if(a[i]>k) dem1--;
		if(a[j]>k) dem1++;
		dem2=min(dem2,dem1);
	}
	return dem2;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int k;
		cin>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<check(a,n,k)<<endl;
	}
}
