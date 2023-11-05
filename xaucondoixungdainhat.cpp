#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		int dp[s.size()+1][s.size()+1] = {0};
		for(int i=0;i<s.size();i++){
			dp[i][i]=1;
		}
		int res=1;
		for(int len=2;len<=s.size();len++){
			for(int i=0;i<=s.size() - len;i++){
				int j=len+i-1; // len=j-i+1
				if(len==2){
					if(s[i]==s[j]) dp[i][j]=1;
					else dp[i][j]=0;
				}
				else{
					dp[i][j]=(s[i]==s[j] && dp[i+1][j-1]==1);
				}
				if(dp[i][j]==1) res=max(res,len);
			}
		}
		cout<<res<<endl;
	}
}

