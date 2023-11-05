#include<bits/stdc++.h>

using namespace std;
vector<vector<int>>ve(1005);
int vs[1005];
int en[1005];
bool check;
int v,e,u,t;
void BFS(int u){
	queue<int>qe;
	qe.push(u);
	vs[u]=1;
	while(qe.size()){
		u=qe.front();
		qe.pop();
		for(int &i:ve[u]){
			if(vs[i]==0){
				qe.push(i);
				vs[i]=1;
				en[i]=u;
				if(vs[t]==1){
					check=true;
					break;
				}
			}
		}
		if(check==true) break;
	}
	if(check==true){
		stack<int>st;
		int end=t;
		while(end>0){
//			cout<<end<<" ";
			st.push(end);
			end=en[end];
		}
		while(!st.empty()){
			cout<<st.top()<<" ";
			st.pop();
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		
		cin>>v>>e>>u>>t;
		for(int i=1;i<=v;i++){
			ve[i].clear();
			vs[i]=0;
			en[i]=0;
		}
		int x,y;
		for(int i=1;i<=e;i++){
			cin>>x>>y;
			ve[x].push_back(y);
		}
		check=false;
		BFS(u);
		if(check==false) cout<<-1;
		cout<<endl;
	}
}


