#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,ins,cop,del;
		cin>>n>>ins>>del>>cop;
		int dp[n+1];
		dp[0]=0;
		int i=1;
		while(i<=n){
			dp[i]=dp[i-1]+ins;
			if(i%2==1){
				dp[i]=min(dp[(i+1)/2]+cop+del,dp[i]);
			}
			else{
				dp[i]=min(dp[i],dp[i/2]+cop);
			}
			i++;
		}
		cout<<dp[n]<<endl;
	}
}

