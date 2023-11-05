#include<bits/stdc++.h>

using namespace std;
int v,e,x,y;
vector<vector<int>>ve(1005);
int vs[1005],cnt;
void BFS(int i){
	queue<int>qe;
	qe.push(i);
	vs[i]=1;
	while(qe.size()){
		int u=qe.front();
		qe.pop();
		for(auto &x:ve[u]){
			if(vs[x]==0){
				qe.push(x);
				vs[x]=1;
			}
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>v>>e;
		cnt=0;
		for(int i=1;i<=v;i++){
			ve[i].clear();
			vs[i]=0;
		}
		for(int i=1;i<=e;i++){
			cin>>x>>y;
			ve[x].push_back(y);
			ve[y].push_back(x);
		}
		for(int i=1;i<=v;i++){
			if(!vs[i]){
				cnt++;
				BFS(i);
			}
		}
		cout<<cnt<<endl;
	}
}

