#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int m;
	cin>>m;
	int b[m][m];
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cin>>b[i][j];
		}
	}
	int c=0,d;
	int res[n][n];
	while(c<n){
		 d=0;
		while(d<n){
			for(int i=c;i<c+m;i++){
				for(int j=d;j<d+m;j++){
					res[i][j]=a[i][j]*b[i-c][j-d];
				}
			}
			d+=m;
		}
		c+=m;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
}

