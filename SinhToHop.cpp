#include<bits/stdc++.h>
using namespace std;
void check(int a[],int n,int k){
	int i;
	for(int i=1;i<=k;i++) cin>>a[i];
	while(1){
	
		for(int i=1;i<=k;i++){
				cout<<a[i]<<" ";
		}	cout<<endl;
		
		 i=k;
		while(a[i]>=+n-k+i&&i>0){
			i--;
		}
		if(i==0) return;
	a[i]=a[i]+1;
	for(int j=i+1;j<=k;j++){
		a[j]=a[i]+j-i;
	}
 }
}
int main(){
   int n,k;
   cin>>n>>k;
   int a[n];
   check(a,n,k);
}

