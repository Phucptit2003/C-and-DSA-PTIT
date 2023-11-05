#include<bits/stdc++.h>

using namespace std;
int v,e,x,y;
vector<vector<int>>ve(1005);
int vs[1005],cnt;
void DFS(int i){
	vs[i]=1;
	for(int k=0;k<ve[i].size();k++){
		if(!vs[ve[i][k]]){
			DFS(ve[i][k]);
		}
	}
}
void Xuly(){
	for(int i=1;i<=v;i++){
		if(!vs[i]){
			cnt++;
			DFS(i);
		}
	}
	cout<<cnt<<endl;
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
		Xuly();
	}
}
