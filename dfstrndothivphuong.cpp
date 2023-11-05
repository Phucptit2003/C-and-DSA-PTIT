#include<bits/stdc++.h>

using namespace std;
int vs[1005];
vector<vector<int>>ve(1005);
void DFS(int m){
	cout<<m<<" ";
	vs[m]=1;
	for(int i=0;i<ve[m].size();i++){
		if(!vs[ve[m][i]]){
			DFS(ve[m][i]);
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int v,e,u;
		cin>>v>>e>>u;
		int x,y;
		for(int i=1;i<=v;i++){
			ve[i].clear();
			vs[i]=0;
		}
		for(int i=0;i<e;i++){
			cin>>x>>y;
			ve[x].push_back(y);
			ve[y].push_back(x);
		}
		DFS(u);
		cout<<endl;
	}
}

