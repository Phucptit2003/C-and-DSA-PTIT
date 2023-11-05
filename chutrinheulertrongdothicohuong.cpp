#include<bits/stdc++.h>

using namespace std;
bool check;
void dfs(int x,vector<vector<int>>&ve,vector<int>&vs){
	if(check) return;
	vs[x]=1;
	for(int k:ve[x]){
		if(vs[k]==0) dfs(k,ve,vs);
		else if(vs[k]==1){
			check=1;
			return;
		}
	}
	vs[x]=2;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int v,e;
		cin>>v>>e;
		vector<vector<int>>ve(v+5);
		vector<int>vs(v+5,0);
		int x,y;
		for(int i=1;i<=e;i++){
			cin>>x>>y;
			ve[x].push_back(y);
		}
		check=0;
		for(int i=1;i<=v;i++){
			if(check) break;
			else if(vs[i]==0) dfs(i,ve,vs);
		}
		if(check) cout<<1<<endl;
		else cout<<0<<endl;
	}
}

