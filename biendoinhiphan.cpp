#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n,m;
		cin>>n>>m;
		int a[100][100];
		int h[n]={0},c[m]={0};
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];		
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(a[i][j]==1){
					h[i]=1;
					c[j]=1;
				}
			}
		}
		for(int i=1;i<=n;i++){
		if(h[i]==1){
			for(int j=1;j<=m;j++){			
					a[i][j]=1;
				}
			}
		}
		for(int j=1;j<=m;j++){
			if(c[j]==1){
			for(int i=1;i<=n;i++){
				a[i][j]=1;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
}
