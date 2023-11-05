#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int dp[10005]={};
		for(int i=1;i<=n;i++){
			 dp[i]=INT_MAX;
			int sqr=sqrt(i);
			for(int j=1;j<=sqr;j++){
				if(dp[i-j*j]<dp[i]){
					dp[i]=min(dp[i],dp[i-j*j]+1);
				}
			}
		}
		cout<<dp[n]<<endl;
	}
}

