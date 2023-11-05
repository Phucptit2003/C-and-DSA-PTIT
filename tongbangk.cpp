#include<bits/stdc++.h>

using namespace std;
const int mod=1e9+7;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		int a[n];
		int dp[k+5]={0};
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		dp[0]=1;
		for(int i=1;i<=k;i++){
			for(int j=0;j<n;j++){
				if(i>=a[j]){
					dp[i]=(dp[i]%mod+dp[i-a[j]]%mod)%mod;
				}
			}
		}
		cout<<dp[k]<<endl;
	}
}

