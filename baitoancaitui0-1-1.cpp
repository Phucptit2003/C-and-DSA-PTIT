#include<bits/stdc++.h>

using namespace std;
int dp[1005][1005];
int main(){
	int test;
	cin>>test;
	while(test--){
		int n,v;
		cin>>n>>v;
		int a[n+1],c[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=n;i++){
			cin>>c[i];
		}
		int res=-1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=v;j++){
				if(j-a[i]>=0){
					dp[i][j]=max(dp[i-1][j-a[i]]+c[i],dp[i-1][j]);
				}
				else{
					dp[i][j]=dp[i-1][j];
				}
				res=max(res,dp[i][j]);
			}
		}
		cout<<res<<endl;
	}
}

