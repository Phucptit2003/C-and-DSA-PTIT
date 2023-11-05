#include<bits/stdc++.h>

using namespace std;
const int MAX=1e5+5;
int k,v,e;	
int x1,x2,x,y;
vector<vector<int>>ve(MAX);
int a[105];
int dp[1005];
multiset<int>cnt;
void DFS(int i){
	dp[i]=1;
	cnt.insert(i);
	for(auto j:ve[i]){
		if(dp[j]==0){
			DFS(j);
		}
	}
}
int main(){	
	cin>>k>>v>>e;
	for(int i=1;i<=k;i++){
		cin>>a[i];
	}
	for(int i=1;i<=e;i++){
		cin>>x>>y;
		ve[x].push_back(y);
	}
	for(int i=1;i<=k;i++){
		memset(dp,0,sizeof(dp));
		DFS(a[i]);
	}
	int dem=0;
	for(int x=1;x<=v;x++){
		if(cnt.count(x)==k){
			dem++;			
		}
	}
	cout<<dem<<endl;
}

