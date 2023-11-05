#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int check=1;
		for(int i=0;i<n-1;i++){
			if(a[i]!=a[i+1]){
				cout<<a[i]<<" "<<a[i+1];
				check=0;
				break;
			}
		}
		if(check==1) cout<<"-1\n";
	}
}

