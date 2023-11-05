#include<bits/stdc++.h>

using namespace std;
int b[1000005];
void check(int n){
	for(int i=0;i<=n;i++) b[i]=0;
	b[0]=1;
	b[1]=1;
	for(int i=2;i<=sqrt(n);i++){
		if(b[i]==0){
			for(int j=i*i;j<=n;j+=i){
				b[j]=1;
			}
		}
	}
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	check(100000);
	for(int i=0;i<n;i++){
		if(b[a[i]]==0) cout<<a[i]<<" ";
	}
}

