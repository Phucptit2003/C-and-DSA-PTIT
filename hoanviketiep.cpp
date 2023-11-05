#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int i=n-1;
		while(a[i]>a[i+1]&&i>0) i--;
		if(i==0){
			for(int i=1;i<=n;i++){
			cout<<a[i]<<" ";
			}
			break;
		}
		int k=n;
		while(a[k]<=a[i]) k--;
		swap(a[i],a[k]);
		int l=i+1,r=n;
		while(l<r){
			swap(a[l],a[r]);
			l++;
			r--;
		}
		for(int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}

