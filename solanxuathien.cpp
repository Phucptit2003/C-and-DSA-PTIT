#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		int a[n];
		int dem=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(a[i]==k){
				dem++;
			}
		}
		if(dem==0){
			cout<<-1<<endl;
		} else
			cout<<dem<<endl;
	}
}

