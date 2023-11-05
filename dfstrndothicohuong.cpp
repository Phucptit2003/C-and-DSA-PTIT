#include<bits/stdc++.h>

using namespace std;
vector<vector<int>>ve(100005);
int vs[100005];
int v,e,u;
void DFS(int m){
	cout<<m<<" ";
	vs[m]=1;
	for(int i=0;i<ve[m].size();i++){
		if(vs[ve[m][i]]==0){
			DFS(ve[m][i]);
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
		}
		DFS(u);
		cout<<endl;
	}
}

