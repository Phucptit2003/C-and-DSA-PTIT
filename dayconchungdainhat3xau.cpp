#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int x,y,z;
		cin>>x>>y>>z;
		int dp[x+5][y+5][z+5];
		string s1,s2,s3;
		cin>>s1>>s2>>s3;
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=s1.size();i++){
			for(int j=1;j<=s2.size();j++){
				for(int k=1;k<=s3.size();k++){
					if(s1[i-1]==s2[j-1]&&s2[j-1]==s3[k-1]) dp[i][j][k]=dp[i-1][j-1][k-1]+1;
					else dp[i][j][k]=max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
				}
			}
		}
		cout<<dp[x][y][z]<<endl;
	}
}

