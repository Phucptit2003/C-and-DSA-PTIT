#include<bits/stdc++.h>
using namespace std;
void check(int a[],int n,int k){
	int i;
	for(int i=1;i<=k;i++) a[i]=i;
	while(1){	
		for(int i=1;i<=k;i++){
				cout<<a[i];
		}
		cout<<" ";
		i=k;
		while(a[i]>=n-k+i&&i>0){
			i--;
		}
		if(i==0){
			cout<<endl;
			return;
		}
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++){
			a[j]=a[i]+j-i;
		}
	}
}
int main(){
	int test;
	cin>>test;
		while(test--){
	   int n,k;
	   cin>>n>>k;
	   int a[n];
	   check(a,n,k);
	}
}

