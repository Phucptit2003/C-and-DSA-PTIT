#include<bits/stdc++.h>

using namespace std;
int k,m,n;
string a[5][5];
vector<string>v;
set<string>tmp;	
int vs[10][10];
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
void Try(int i,int j,string s){
	if(tmp.find(s)!=tmp.end()) v.push_back(s);
	for(int k=0;k<8;k++){
		int u=i+dx[k];
		int v=j+dy[k];
		if(u>=0&&u<m&&v>=0&&v<n&&vs[u][v]==0){
			vs[u][v]=1;
			Try(u,v,s+a[u][v]);
			vs[u][v]=0;
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){	
		cin>>k>>m>>n;
		
		string s;
		while(k--){
			cin>>s;
			tmp.insert(s);
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				memset(vs,0,sizeof(vs));
				vs[i][j]=1;
				Try(i,j,""+a[i][j]);
			}
		}
		if(v.empty())cout<<-1<<endl;
		else{
			for(auto x:v) cout<<x<<" ";
			cout<<endl;
		}
		tmp.clear();
		v.clear();
	}
}
