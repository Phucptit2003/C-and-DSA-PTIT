#include<bits/stdc++.h>

using namespace std;
int n,m,u,v;
vector<vector<int>>ve(1005);
int vs[1005];
bool check;
void DFS(int u,int i){
	if(check==true) return;
	if( u==v) {
		check==true;
		return;
	}
	vs[u]=1;
	for(int j:ve[u]){
		if(vs[j]==0){
			vs[j]=1;
			DFS(j,i);
			vs[j]=0;
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n>>m>>u>>v;
		for(int i=1;i<=n;i++){
			ve[i].clear();
		}
		int x,y;
		for(int i=1;i<=m;i++){
			cin>>x>>y;
			ve[x].push_back(y);
		}
		int dem=0;
		for(int i=1;i<=n;i++){
			if(i!=u && i!=v){
				memset(vs,0,sizeof(vs));
				check=false;
				DFS(u,i);
				if(vs[i]==1) dem++;
			}
		}
		cout<<dem<<endl;
	}
}

