#include<bits/stdc++.h>

using namespace std;
int n,a[1000];
void Check(int m,int a[]){
	int check=1;
	for(int i=1;i<=n/2;i++){
		if(a[i]!=a[n-i+1]){
			check=0;
			break;
		}
	}
	if(check==1){
		for(int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
	}
	cout<<endl;
}
void Xuly(int m){
	if(m>n) return;
	if(m==n){
		Check(m,a);
	}
	for(int i=0;i<=1;i++){
		a[m]=i;
		Xuly(m+1);
	}
}
int main(){
	cin>>n;
	Xuly(1);
}

