#include<bits/stdc++.h>

using namespace std;
int v,e,u;
vector<int>ve[1005];
vector<pair<int,int>>tmp;
int vs[1005];
void BFS(int u){
	queue<int>qe;
	qe.push(u);
	vs[u]=1;
	while(qe.size()){
		u=qe.front();
		qe.pop();
		for(int j:ve[u]){
			if(vs[j]==0){
				qe.push(j);
				tmp.push_back({u,j});
				vs[j]=1;
			}		
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){	
		cin>>v>>e>>u;
		for(int i=1;i<=v;i++){
			ve[i].clear();
			vs[i]=0;
		}
		int x,y;
		for(int i=1;i<=e;i++){
			cin>>x>>y;
			ve[x].push_back(y);
			ve[y].push_back(x);
		}
		BFS(u);
		if(tmp.size()!=v-1) cout<<-1<<endl;
		else {
			for(auto j:tmp)	cout<<j.first<<" "<<j.second<<endl;
		}
		tmp.clear();
	}
}

