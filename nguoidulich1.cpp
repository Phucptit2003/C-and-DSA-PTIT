#include<bits/stdc++.h>

using namespace std;
int dp[20];
int n,res=1e9+7;	
int a[20][20];
void Try(int i,int sum=0,int cnt=1){
	if(sum>res) return;
	if(cnt==n){
		res=min(res,sum+a[i][1]);
		return;
	}
	for(int j=1;j<=n;j++){
		if(!dp[j]){
			dp[j]=1;
			Try(j,sum+a[i][j],cnt+1);
			dp[j]=0;
		}
	}
}
int main(){	
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	dp[1]=1;
	Try(1);
	cout<<res<<endl;
}

