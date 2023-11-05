#include<bits/stdc++.h>

using namespace std;
bool check;
int a[10005];
int n;
int DEQUY(int l,int r,int x){
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==x){
			cout<<"YES\n";
			check=true;
			return;
		}
		if(check==true) return;
		if(a[mid]>x){
			r=mid-1;
		}
		else if(a[mid]<x){
			l=mid+1;
		}
		else return mid;
	}
	return 0;
}
int main(){	
	cin>>n;	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	check=false;
	int x;
	cin>>x;
	sort(a,a+n);
	DEQUY(0,n-1,x);
	if(check==false) cout<<"NO\n";
}

