#include<bits/stdc++.h>

using namespace std;
int n,m,a[105][105];
pair<int,int>path[]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
void DFS(int i,int j){
	a[i][j]=0;
	for(int k=0;k<8;k++){
		int inew=i+path[k].first;
		int jnew=j+path[k].second;
		if(inew>=0&&jnew>=0&&inew<n&&jnew<n&&a[inew][jnew]==1){
			DFS(inew,jnew);
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int dem=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(a[i][j]==1){
					dem++;
					DFS(i,j);
				}
			}
		}
		cout<<dem<<endl;
	}
}

