#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m,x,y,z;
	cin>>n>>m;
	int a[n+5][n+5];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			a[i][j]=1e9;
		}
		a[i][i]=0;
	}
	while(m--){
		cin>>x>>y>>z;
		a[x][y]=a[y][x]=z;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int z=1;z<=n;z++){
				a[j][z]=min(a[j][z],a[i][j]+a[i][z]);
			}
		}
	}
	int q;
	cin>>q;
	while(q--){
		cin>>x>>y;
		cout<<a[x][y]<<endl;
	}
	
}

