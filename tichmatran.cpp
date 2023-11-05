#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,p;
	cin>>n>>m>>p;
	int a[100][100];
	int b[100][100];
	int c[100][100];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int j=1;j<=m;j++){
		for(int k=1;k<=p;k++){
			cin>>b[j][k];
		}
	}
	for(int i=1;i<=n;i++){
		for(int k=1;k<=p;k++){
			 c[i][k]=0;
			for(int j=1;j<=m;j++){
				c[i][k]=c[i][k]+a[i][j]*b[j][k];
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int k=1;k<=p;k++){
			a[i][k]=c[i][k];
		}
	}
	for(int i=1;i<=n;i++){
		for(int k=1;k<=p;k++){
			cout<<a[i][k]<<" ";
		}
		cout<<"\n";
	}
}
