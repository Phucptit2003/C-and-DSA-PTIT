#include<bits/stdc++.h>

using namespace std;
vector<vector<int>>ve(100005);
int vs[100005];
int v,e,u,t;
bool check;
vector<int>vl;
void DFS(int m){
	if(check==true){
		return;
	}
	vl.push_back(m);
	if(m==t){
		check=true;
		for(auto x:vl){
			cout<<x<<" ";
		}
		cout<<endl;
	}
	vs[m]=1;
	for(int i=0;i<ve[m].size();i++){
		if(vs[ve[m][i]]==0){
			DFS(ve[m][i]);
			vl.pop_back();
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){		
		check=false;
		vl.clear();
		cin>>v>>e>>u>>t;
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
		DFS(u);
		if(check==false){
			cout<<-1<<endl;
		}
	}
}

