#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n+1],dp[n+1]={0};
		for(int i=1;i<=n;i++) cin>>a[i];
		dp[0]=0;
		dp[1]=a[1];
	//	int dp[n];
		for(int i=2;i<=n;i++){
			dp[i]=max(dp[i-1],dp[i-2]+a[i]);
		}
		cout<<dp[n]<<endl;
	}
}

