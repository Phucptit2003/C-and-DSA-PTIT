#include<bits/stdc++.h>

using namespace std;
void check(int a[],int b[],int n,int k){
	for(int i=0;i<=n;i++){
		b[i]=0;
	}
	for(int i=1;i<=k;i++){
		cin>>a[i];
		b[a[i]]=1;
	}
	int dem=0;
	int i=k;
	while(a[i]>=n-k+i&&i>0){
		i--;
	}
	if(i==0){
		cout<<k<<endl;
		return;
	}
	a[i]=a[i]+1;
	for(int j=i+1;j<=k;j++){
		a[j]=a[i]+j-i;
	}
	for(int i=1;i<=k;i++){
		if(b[a[i]]==0){
			dem++;
			b[a[i]]=1;
		}
	}	
	cout<<dem<<endl;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		int a[n];
		int b[n];
		check(a,b,n,k);
	}
}

