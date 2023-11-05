#include<bits/stdc++.h>

using namespace std;
vector<vector<int>>ve(100005);
int vs[100005];
vector<int>trace(100005);
int t;
void BFS(int u){
	queue<int>qe;
	qe.push(u);
	vs[u]=1;
	while(qe.size()){
		u=qe.front();
		qe.pop();
		for(int &i:ve[u]){
			if(vs[i]==0){
				trace[i]=u;
				qe.push(i);
				vs[i]=1;
			}
		}
	}
}
void find(int s,int e){
	if(trace[e]==0){
		cout<<-1;
		return;
	}
	vector<int>res;
	while(s!=e){
		if(e==0){
			cout<<-1;
			return;
		}
		res.push_back(e);
		e=trace[e];
	}
	res.push_back(e);
	reverse(res.begin(),res.end());
	for(int &i:res) cout<<i<<" ";
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int v,e,u;
		cin>>v>>e>>u>>t;
		for(int i=1;i<=v;i++){
			ve[i].clear();
			vs[i]=0;
			trace[i]=0;
		}
		int x,y;
		for(int i=1;i<=e;i++){
			cin>>x>>y;
			ve[x].push_back(y);
		}
		BFS(u);
		find(u,t);
		cout<<endl;
	}
}

