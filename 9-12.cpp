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
	sort(b,b+n,tmp);
	int check;
	for(int i=0;i<n;i++){
		check=1;
		for(int j=0;j<n;j++){
			if(a[i]>b[j]){
				check=0;
				cout<<b[j]<<" ";
				break;
			}
		}
		if(check==1) cout<<"#"<<" ";
	}
}

