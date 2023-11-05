#include<bits/stdc++.h>

using namespace std;
int v,e,x,y;
vector<int>ve[15];
int vs[1005];
int ok;
void DFS(int u,int v,int cnt=1){
	if(cnt==v){
		ok=1;
		return;
	}
	if(ok==1) return;
	for(auto j:ve[u]){
		if(vs[j]==0){
			vs[j]=1;
			DFS(j,v,cnt+1);
			vs[j]=0;
		}
	}
}
int check(int v){
	for(int i=1;i<=v;i++){
		memset(vs,0,sizeof(vs));
		vs[i]=1;
		DFS(i,v);
		if(ok==1) return ok;
	}
	return 0;
}
int main(){
	int test;
	cin>>test;
	while(test--){		
		cin>>v>>e;
		for(int i=0;i<e;i++){
			cin>>x>>y;
			ve[x].push_back(y);
			ve[y].push_back(x);
		}
		ok=0;
		cout<<check(v)<<endl;
		for(int i=1;i<=v;i++){
			ve[i].clear();
		}
	}
}

