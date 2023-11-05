#include<bits/stdc++.h>
using namespace std;
void check(int a[],int n){
	int i;
	for(int i=1;i<=n;i++) cin>>a[i];
	while(1){
	
		for(int i=1;i<=n;i++){
				cout<<a[i]<<" ";
		}	cout<<endl;
		
		 i=n-1;
		while(a[i]>a[i+1]&&i>0){
			i--;
		}
		if(i==0) return;
	int k=n;
	while(a[k]<a[i])k--;
	int tmp=a[i];
	a[i]=a[k];
	a[k]=tmp;
	int l=i+1;
	int r=n;
	while(l<r){
		int tmp=a[l];
	a[l]=a[r];
	a[r]=tmp;
	l++;r--;
	}
 }
}
int main(){
   int n;
   cin>>n;
   int a[n];
   check(a,n);
}

