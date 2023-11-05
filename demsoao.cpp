#include<bits/stdc++.h>

using namespace std;

int n,m;
char s[105][105];
int vs[105][105];
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};

void Tim(int i,int j){
	queue<pair<int,int>>qe;
	qe.push({i,j});
	vs[i][j]=1;
	while(qe.size()){
		pair<int,int>t=qe.front();
		qe.pop();
		for(int i=0;i<8;i++){
			int i1=t.first+dx[i];
			int j1=t.second+dy[i];
			if(i1>=1&&i1<=n&&j1>=1&&j1<=m&&s[i1][j1]=='W'&&vs[i1][j1]==0){
				qe.push({i1,j1});
				vs[i1][j1]=1;
			}
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>s[i][j];
		}
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(s[i][j]=='W'&&vs[i][j]==0){
				Tim(i,j);
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
}

