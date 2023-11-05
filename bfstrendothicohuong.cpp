#include<bits/stdc++.h>

using namespace std;
vector<vector<int>>ve(100005);
int vs[100005];
void BFS(int u){
	queue<int>qe;
	qe.push(u);
	vs[u]=1;
	while(qe.size()){
		u=qe.front();
		cout<<u<<" ";
		qe.pop();
		for(int &i:ve[u]){
			if(vs[i]==0){
				qe.push(i);
				vs[i]=1;
			}
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int v,e,u;
		cin>>v>>e>>u;
		for(int i=1;i<=v;i++){
			ve[i].clear();
			vs[i]=0;
		}
		int x,y;
		for(int i=1;i<=e;i++){
			cin>>x>>y;
			ve[x].push_back(y);
		}
		BFS(u);
		cout<<endl;
	}
}


