#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		pair<int,int>v[n];
		for(int i=0;i<n;i++){
			cin>>v[i].first>>v[i].second;
		}
		sort(v,v+n);
		vector<int> dp(n,1);
		for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
				if(v[i].first>v[j].second){
					dp[i]=max(dp[i],dp[j]+1);
				}
			}
		}
		cout<<*max_element(dp.begin(),dp.end())<<endl;
	}
}

