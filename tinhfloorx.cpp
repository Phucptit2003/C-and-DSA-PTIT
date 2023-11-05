#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		if(a[0]>k){
			cout<<"-1\n";
		} else{
			for(int i=0;i<n;i++){
				if(a[i]>k){
					cout<<i<<endl;
					break;
				}
			}
		}
	}
}

