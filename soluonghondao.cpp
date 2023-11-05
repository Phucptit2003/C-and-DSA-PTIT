#include<bits/stdc++.h>

using namespace std;
int n,m,x;
int vs[505],a[505][505];
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
bool check(int i,int j){
	return (i&&j&&i<=n&&j<=m&&a[i][j]);
}
void DFS(int i,int j){
	if(check(i,j)){
		a[i][j]=0;
		for(int k=0;k<8;k++){
			DFS(i+dx[k],j+dy[k]);
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){		
		cin>>n>>m;
		for(int i=0;i<=n;i++){
			vs[i]=0;
		}
		int cnt=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(a[i][j]){
					cnt++;
					DFS(i,j);
				}
			}
		}
		cout<<cnt<<endl;
	}
}

