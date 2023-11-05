#include<bits/stdc++.h>
using namespace std;
void check(int a[],int n,int k,int b[]){
	int i;
	for(int i=1;i<=k;i++){
		cin>>a[i];
		b[i]=i;
	}
	int dem=1;
	while(1){
		int check=1;
		for(int i=1;i<=k;i++){
			if(a[i]!=b[i]){
				dem++;
				check=0;
				break;
			}
		}
		if(check==1){
			cout<<dem<<endl;
			return;
		}
		int i=k;
		while(b[i]>=n-k+i&&i>0){
			i--;
		}
	b[i]=b[i]+1;
	for(int j=i+1;j<=k;j++){
		b[j]=b[i]+j-i;
	}
 }
}
int main(){
	int test;
	cin>>test;
	while(test--){
	   int n,k;
	   cin>>n>>k;
	   int a[n],b[n];
	   check(a,n,k,b);
	}
}

