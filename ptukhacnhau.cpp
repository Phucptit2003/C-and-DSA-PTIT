#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		long long a[n];
		long long b[n-1];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n-1;i++){
			cin>>b[i];
		}
		int check=1;
		for(int i=0;i<n-1;i++){
			if(a[i]!=b[i]){
				cout<<i+1<<endl;
				check=0;
				break;
			}
		}
		if(check==1){
			cout<<n-1<<endl;
		}
	}
}

