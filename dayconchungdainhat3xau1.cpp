#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int x,y,z;
		cin>>x>>y>>z;
		string x1,y1,z1;
		cin>>x1>>y1>>z1;
		int dp[x+5][y+5][z+5];
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=x;i++){
			for(int j=1;j<=y;j++){
				for(int k=1;k<=z;k++){
					if(x1[i-1]==y1[j-1] && x1[i-1]==z1[k-1]){
						dp[i][j][k]=dp[i-1][j-1][k-1]+1;
					} else{
						dp[i][j][k]=max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
					}
				}
			}
		}
		cout<<dp[x][y][z]<<endl;	
	}
}

