#include<bits/stdc++.h>

using namespace std;
long long n,k,a[13],c[13],sum=0;
vector<string>v;
void Try(int m){
	if(m>n){
		return;
	}
	if(sum>k) return;
	if(sum==k){
		for(int i=1;i<=n;i++){
			if(c[i]==1){
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
		return;
	}
	for(int i=1;i<=n;i++){
		if(c[m]==0){
			sum+=a[m];
			c[m]=1;
			Try(m+1);
			c[m]=0;
			sum-=a[m];
		}
	}
}
void Xuly(int n,int k){
	for(int i=1;i<=n;i++){
		c[i]=0;
	}
	Try(1);
	for(auto x:v){
		cout<<x<<" ";
	}
	cout<<endl;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		Xuly(n,k);
	}
}

