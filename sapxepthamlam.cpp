#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
		int check=1;
		for(int i=0;i<n/2;i++){
			if(a[i]!=b[i]&&a[i]!=b[n-1-i]){
				check=0;
				break;
			}
		}
		if(check==1) cout<<"Yes\n";
		else cout<<"No\n";
	}
}

