#include<bits/stdc++.h>

using namespace std;
int Search(int a[],int n,int x){
	int l=0,r=n-1,mid;
	while(a[l]<=x&&a[r]>=x){
		if(a[l]==a[r]) return(l+r)/2;
		mid=l+(x-a[l])*(r-l)/(a[r]-a[l]);
		if(a[mid]<x) l=mid+1;
		else if(a[mid]>x) r=mid-1;
		else return mid;
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int x;
		cin>>x;
		sort(a,a+n);
		cout<<Search(a,n,x)<<endl;
	}
}

