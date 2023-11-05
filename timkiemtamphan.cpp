#include<bits/stdc++.h>

using namespace std;
int n;
int Search(int a[],int x,int l,int r){
	if(l>r) return -1;
	int mid1=l+(r-l)/3;
	int mid2=l+2*(r-l)/3;
	if(a[mid1]==x) return mid1;
	if(a[mid2]==x) return mid2;
	if(a[mid1]>x){
		Search(a,x,l,mid1-1);
	}
	else if(a[mid2]<x){
		Search(a,x,mid2+1,r);
	}
	else Search(a,x,mid1,mid2);
}
int main(){
	
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int x;
	cin>>x;
	sort(a,a+n);
	cout<<Search(a,x,0,n-1);
}

