#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int check=1;
		for(int i=0;i<n;i++){
			if(a[i]==k){
				cout<<i+1<<endl;
				check=0;
				break;
			}
		}
		if(check==1) cout<<"NO"<<endl;
	}
}

