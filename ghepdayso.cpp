#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int k,n;
		cin>>k>>n;
		int a[10000];
		for(int i=0;i<k*n;i++){
				cin>>a[i];
		} int t=n*k;
		sort(a,a+n*k);
		for(int i=0;i<n*k;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
		}
	}

