#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		int b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		for(int i=1;i<n-1;i++){
			a[i]=b[i-1]*b[i+1];
		}
		for(int i=0;i<n;i++){
			a[0]=b[1]*b[0];
			a[n-1]=b[n-2]*b[n-1];
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
