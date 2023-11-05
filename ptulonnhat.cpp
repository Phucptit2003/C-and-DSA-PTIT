#include<bits/stdc++.h>

using namespace std;
bool tmp(int a,int b){
	return a>b;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n,tmp);
		for(int i=0;i<k;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}

