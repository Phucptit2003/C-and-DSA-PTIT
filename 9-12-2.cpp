#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n+2][n+2],f[n+2][n+2];	
	for(int i=1;i<=n;i++){
		f[0][i]=-105;
		f[n+1][i]=-105;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			f[i][j]=a[i][j];
		}
	}
	for(int j=2;j<=n;j++){
		for(int i=1;i<=n;i++){
			f[i][j]=max(f[i-1][j-1],max(f[i][j-1],f[i+1][j-1]))+a[i][j];
		}
	}
	int maxn=-105;
	for(int i=1;i<=n;i++){
		maxn=max(maxn,f[i][n]);
	}
	cout<<maxn;
}

