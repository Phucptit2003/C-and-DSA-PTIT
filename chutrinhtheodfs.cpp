#include<bits/stdc++.h>

using namespace std;
int v,e,x,y;
vector<vector<int>>ve(1005);
int en;
int tmp[1005];
int vs[1005];
bool check;
void DFS(int u,int par){
	if(check==true) return;
	vs[u]=1;
	for(auto j:ve[u]){
		if(vs[j]==0 ){
			tmp[j]=u;
			DFS(j,u);
		}
		else {
			if(j!=tmp[u]&&j==1){
				check=true;
				en = u;
				return;
			}
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>v>>e;
		for(int i=1;i<=e;i++){
			cin>>x>>y;
			ve[x].push_back(y);
			ve[y].push_back(x);
		}
		memset(tmp,0,sizeof(tmp));
		for(int i=1;i<=v;i++){
			sort(ve[i].begin(),ve[i].end());
		}
		check=false;
		DFS(1,0);
		if(check==false) cout<<"NO\n";
		else {
			stack<int>st;
			cout<<1<<" ";
			while(tmp[en]){
				st.push(en);
				en=tmp[en];
			}
			while(st.size()){
				cout<<st.top()<<" ";
				st.pop();
			}
			cout<<1<<endl;
		}
		for(int i=1;i<=v;i++){
			vs[i]=0;
			ve[i].clear();
		}
	}
}
