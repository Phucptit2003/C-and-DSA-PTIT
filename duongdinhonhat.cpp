#include<bits/stdc++.h>

using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){	
		int n,m;	
		cin>>n>>m;
		int a[n+1][m+1];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];
			}
		}
		for(int i=2;i<=m;i++) a[1][i]+=a[1][i-1];
		for(int i=2;i<=n;i++){
			for(int j=1;j<=m;j++){
				int tmp=a[i-1][j];
				if(j-1>=1) tmp=min(tmp,min(a[i-1][j-1],a[i][j-1]));
				a[i][j]+=tmp;
			}
		}
		cout<<a[n][m]<<endl;
	}
}

