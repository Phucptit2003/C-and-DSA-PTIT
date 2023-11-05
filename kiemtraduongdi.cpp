#include<bits/stdc++.h>

using namespace std;
vector<vector<int>>v;
int vs[100005];
int u,ve;	
int n,m;
void DFS(int m){	
	if(vs[m]==1){
		return;
	}
	vs[m]=1;
	for(int i=0;i<v[m].size();i++){
		if(vs[v[m][i]]==0){
			DFS(v[m][i]);
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){		
		cin>>n>>m;
		v.resize(n+1);
		for(int i=1;i<=n;i++){
			v[i].clear();
			vs[i]=0;
		}
		int x,y;
		for(int i=1;i<=m;i++){
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		int q;
		cin>>q;		
		while(q--){
			cin>>u>>ve;
			for(int i=1;i<=n;i++){
				vs[i]=0;
			}
			DFS(u);
			if(vs[ve]) cout<<"YES\n";
			else cout<<"NO\n";
		}		
	}
}
