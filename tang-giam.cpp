#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		double a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i]>>b[i];
		}
		vector<int>dp(n,1);
		for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
				if(a[i]>a[j]&&b[j]>b[i]){
					dp[i]=max(dp[i],dp[j]+1);
				}
			}
		}
		cout<<*max_element(dp.begin(),dp.end())<<endl;
	}
}

