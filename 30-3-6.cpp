#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int dem=n;
		int l=n/2-1,r=n-1,mid=n/2;
		while(l>=0&&r>=mid){
			if(a[r]>=a[l]*2){
				dem--;
				l--;
				r--;
			}
			else l--;
		}
		cout<<dem<<endl;
	}
}

