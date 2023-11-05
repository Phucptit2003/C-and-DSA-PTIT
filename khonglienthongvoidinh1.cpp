#include<bits/stdc++.h>

using namespace std;
int vs[305];
vector<vector<int>>ve(305);
void DFS(int m){
//	cout<<m<<" ";
	vs[m]=1;
	for(int i=0;i<ve[m].size();i++){
		if(!vs[ve[m][i]]){
			DFS(ve[m][i]);
		}
	}
}
int main(){
		int v,e;
		cin>>v>>e;
		int x,y;
		for(int i=0;i<e;i++){
			cin>>x>>y;
			ve[x].push_back(y);
			ve[y].push_back(x);
		}
		DFS(1);
		bool check=false;
		for(int i=1;i<=v;i++){
			if(vs[i]==0) {
				check=true;
				cout<<i<<endl;
			}
		}
		if(check==false) cout<<0<<endl;
	}

