#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		int dp[45][45]={};
		string tmp=s;
		reverse(tmp.begin(),tmp.end());
		for(int i=0;i<s.size();i++){
			for(int j=0;j<tmp.size();j++){
				if(s[i]==tmp[j]){
					dp[i+1][j+1]=dp[i][j]+1;
				}
				else dp[i+1][j+1]=max(dp[i+1][j],dp[i][j+1]);
			}
		}
		cout<<s.size()-dp[s.size()][tmp.size()]<<endl;
	}
}

