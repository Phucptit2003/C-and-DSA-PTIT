#include<bits/stdc++.h>

using namespace std;
const int mod=1e9+7; 
int main(){
	int test;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		if(k>n){
			cout<<0<<endl;
		} else if(k==0) cout<<1<<endl;
		else{
			long long res=1;
			for(int i=n-k+1;i<=n;i++){
				res=res*i%mod;
			}
			cout<<res<<endl;
		}
	}
}

