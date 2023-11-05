#include<bits/stdc++.h>

using namespace std;
int v;
vector<int>ve[1005];
vector<pair<int,int>>tmp;
int vs[1005];
bool check;
void DFS(int u){
	if(check==false) return;
	vs[u]=1;
	for(int j:ve[u]){
		if(vs[j]==0){
			tmp.push_back({u,j});
			DFS(j);
		}
		else{
			check=false;
			return;
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){	
		cin>>v;
		for(int i=1;i<=v;i++){
			ve[i].clear();
			vs[i]=0;
		}
		int x,y;
		for(int i=1;i<=v-1;i++){
			cin>>x>>y;
			ve[x].push_back(y);
	//		ve[y].push_back(x);
		}
		check=true;
		DFS(1);
		if(tmp.size()!=v-1) cout<<"NO\n"<<endl;
		else cout<<"YES\n";
		tmp.clear();
	}
}


