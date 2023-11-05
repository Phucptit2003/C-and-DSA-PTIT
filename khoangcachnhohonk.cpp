#include<bits/stdc++.h>

using namespace std;

long long Tim(long long a[],long long l,long long r,long long x){
	while(l<=r){
		long long mid=(l+r)/2;
		if(a[mid]==x) return mid;
		else if(a[mid]<x) l=mid+1;
		else r=mid-1;
	}
	return l;
}

long long Tinh(long long a[],long long n,long long k){
	long long dem=0;
	for(int i=0;i<n;i++){
		int j=Tim(a,i+1,n-1,k+a[i]);
		dem+=j-i-1;
	}
	return dem;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		long long n,k;
		cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		long long dem=Tinh(a,n,k);
		cout<<dem<<endl;
	}
}

