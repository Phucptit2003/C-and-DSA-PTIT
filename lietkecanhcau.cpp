#include<bits/stdc++.h>

using namespace std;
int v,e,x,y,cnt;
int vs[1005],dis[1005],low[1005],par[1005];
vector<pair<int,int>>res;
vector<vector<int>>ve(1005);
void Refesh(){
	ve.clear();
	res.clear();
	ve.resize(v+5);
	memset(vs,0,sizeof(vs));
	memset(dis,0,sizeof(dis));
	memset(low,0,sizeof(low));
	memset(par,0,sizeof(par));
}
void DFS(int i){
	vs[i]=1;
	dis[i]=low[i]=cnt++;
	for(int &k:ve[i]){
		if(vs[k]==0){
			par[k]=i;
			DFS(k);
			low[i]=min(low[i],low[k]);
			if(low[k]>dis[i]){
				if(i<k) res.push_back({i,k});
				else res.push_back({k,i});
			}
		}
		else if(k!=par[i]) low[i]=min(low[i],dis[k]);
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>v>>e;
		cnt=1;
		for(int i=1;i<=e;i++){
			cin>>x>>y;
			ve[x].push_back(y);
			ve[y].push_back(x);
		}
		for(int i=1;i<=v;i++){
			if(vs[i]==0){
				DFS(i);
			}
		}
		sort(res.begin(),res.end());
		for(auto x:res) cout<<x.first<<" "<<x.second<<" ";
		cout<<endl;
		Refesh();
	}
}
