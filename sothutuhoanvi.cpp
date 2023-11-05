#include<bits/stdc++.h>

using namespace std;
void Xuly(int a[],int n,int b[]){
	int dem=1;
	while(1){
		int check=1;
		for(int i=1;i<=n;i++){
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
		int i=n-1;
		while(b[i]>=b[i+1]&&i>0){
			i--;
		}
		int k=n;
		while(b[k]<b[i]&&k>0) k--;
		swap(b[i],b[k]);
		int l=i+1,r=n;
		while(l<r){
			swap(b[l],b[r]);
			l++,r--;
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n+1];
		int b[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
			b[i]=i;
		}
		Xuly(a,n,b);
	}
}

