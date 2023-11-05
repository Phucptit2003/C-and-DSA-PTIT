#include<bits/stdc++.h>

using namespace std;
int dp[105][50005];
const int mod=1e9+7;
int main(){
	for(int i=1;i<=9;i++){
		dp[1][i]=1;
	}	
	for(int i=1;i<=100;i++){
		for(int j=0;j<=9;j++){
			for(int z=j;z<=50000;z++){
				dp[i][z]=(dp[i][z]%mod+dp[i-1][z-j]%mod)%mod;
			}
		}
	}
	int test;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		cout<<dp[n][k]<<endl;
	}
}

