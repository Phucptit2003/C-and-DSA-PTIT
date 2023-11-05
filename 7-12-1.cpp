#include<bits/stdc++.h>

using namespace std;
bool tmp(int a,int b){
	return a>b;
}
int main(){
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	int dem=0;
	sort(b,b+n,tmp);
	long long t=b[n-1]-1;
	for(int i=0;i<n;i++){
		dem=0;
		for(int j=0;j<n;j++){
			if(a[i]>b[j]){
				dem++;
				cout<<b[j]<<" ";
				break;
			}
		}
		if(dem==0) cout<<"# ";
	}
}

