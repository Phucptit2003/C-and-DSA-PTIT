#include<bits/stdc++.h>

using namespace std;
int n,k,a[20];
void Xuly(int m){
	if(m>n){
		int dem=0;
		for(int i=1;i<=n;i++){
			dem+=a[i];
		}
		if(dem==k){
			for(int i=1;i<=n;i++) cout<<a[i];
			cout<<endl;
		}
		return;
	}
	for(int i=0;i<=1;i++){
		a[m]=i;
		Xuly(m+1);
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n>>k;
		Xuly(1);
	}
}

