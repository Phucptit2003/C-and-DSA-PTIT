#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int dem=0;
	for(int i=0;i<n-1;i++){
		int t=k-a[i];
		for(int j=i+1;j<n;j++){
			if(a[j]>t){
				dem+=n-1-j+1;
				break;
			}
		}
	}
	cout<<dem;
}

