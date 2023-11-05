#include<bits/stdc++.h>

using namespace std;
int v,e,x,y;
vector<vector<int>>ve(1005);
int vs[1005];
void DFS(int i){
	vs[i]=1;
	for(auto &x:ve[i]){
		if(vs[x]==0){
			DFS(x);
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>v>>e;
		bool check=false;
		for(int i=1;i<=v;i++){
			ve[i].clear();
			vs[i]=0;
		}
		for(int i=1;i<=e;i++){
			cin>>x>>y;
			ve[x].push_back(y);
		}
		DFS(1);
		for(int i=1;i<=v;i++){
			if(vs[i]==0){
				cout<<"NO\n";
				check=true;
				break;
			}
		}
		if(check==false) cout<<"YES\n";
	}
}

