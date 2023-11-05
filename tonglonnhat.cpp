#include<bits/stdc++.h>
using namespace std;
long long check(int a[],int b[],int n,int m){
	int sum=0;
	int t=0;
	int k;
	for(int i=0;i<n;i++){
		t+=a[i];
		k=0;
		for(int j=i+1;j<m;j++){
			k+=b[j];
		}
		if(k+t>sum)sum=k+t;
		}
	return sum;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int j=0;j<m;j++){
			cin>>b[j];
		}
		int max=check(a,b,n,m);
		int max1=check(b,a,m,n);
		if(max1>max) cout<<max1<<endl;
		else cout<<max<<endl;
	}
}
