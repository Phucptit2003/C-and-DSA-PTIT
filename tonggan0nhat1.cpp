#include<bits/stdc++.h>

using namespace std;
bool tmp(int a,int b){
	return abs(a)<abs(b);
}
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
		sort(a,a+n,tmp);
		cout<<a[0]+a[1];
		cout<<endl;
	}
}

