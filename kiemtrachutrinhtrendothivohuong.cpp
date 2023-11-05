#include<bits/stdc++.h>

using namespace std;
int v,e,x,y;
vector<int>ve[1005];
int vs[1005];

bool dfs(int u,int curr){
	vs[u]=1;
	for(int k:ve[u]){
		if(vs[k]==0){
			dfs(k,u);
		}
		else if(k!=curr&&vs[k]==1){
			return true;
		}
	}
	return false;
}
bool check(int k){
	for(int i=1;i<=k;i++){
		if(vs[i]==0){
			if(dfs(i,0)){
				return true;
			}
		}
	}
	return false;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>v>>e;
		for(int i=1;i<=v;i++){
			ve[i].clear();
			vs[i]=0;
		}
		for(int i=1;i<=e;i++){
			cin>>x>>y;
			ve[x].push_back(y);
			ve[y].push_back(x);
		}
		if(check(v)){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
}
