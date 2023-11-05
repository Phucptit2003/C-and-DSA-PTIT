#include<bits/stdc++.h>

using namespace std;
int v,e;
vector<int>ve[100005];
vector<int>tmp;
int vs[100005];
void DFS(int u){
	vs[u]=1;
	for(int j:ve[u]){
		if(vs[j]==0){
			tmp.push_back(j);
			DFS(j);
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){	
		cin>>v>>e;
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
		int res=0;
		for(int i=1;i<=v;i++){
			if(vs[i]==0){
				tmp.push_back(i);
				DFS(i);
				int n=tmp.size();
				res=max(res,n);
				tmp.clear();
			}
		}
		cout<<res<<endl;
	}
}
