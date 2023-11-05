#include<bits/stdc++.h>

using namespace std;
int v,e,x,y;
int vs[1005];
vector<vector<int>>ve(1005);

void DFS(int x){
	stack<int>st;
	st.push(x);
	vs[x]=1;
	while(st.size()){
		int t=st.top();
		st.pop();
		for(int k:ve[t]){
			if(vs[k]==0){
				st.push(k);
				vs[k]=1;
			}
		}
	}
}

void refresh(){
	for(int i=1;i<=v;i++) vs[i]=0;
}
int Demtp(){
	int cnt=0;
	for(int i=1;i<=v;i++){
		if(vs[i]==0){
			DFS(i);
			cnt++;
		}
	}
	return cnt;
}

int DemDT(int i){
		refresh();
		vs[i]=1;
		int dem=Demtp();
		return dem;
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
		for(int i=1;i<=e;i++){
			cin>>x>>y;
			ve[x].push_back(y);
			ve[y].push_back(x);
		}
		int t=Demtp();
		for(int i=1;i<=v;i++){
			int dem=DemDT(i);
			if(dem>t) cout<<i<<" ";
		}
		cout<<endl;
	}
}

