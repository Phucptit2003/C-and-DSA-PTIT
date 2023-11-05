#include<iostream>
using namespace std;

int main(){
	int m,n,p;
	cin>>m>>n>>p;
	int a[100][100];
	int b[100][100];
	int res[100][100];
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int j=1;j<=n;j++){
		for(int k=1;k<=p;k++){
			cin>>b[j][k];
		}
	}
	
	for(int i=1;i<=m;i++){
		for(int k=1;k<=p;k++){
			res[i][k]=0;
		   for(int j=1;j<=n;j++){
		   	 res[i][k]=res[i][k]+(a[i][j]*b[j][k]);
		   }
		}
	}
	for(int i=1;i<=m;i++){
		for(int k=1;k<=p;k++){
		a[i][k]=res[i][k];
		} 
	}
	for(int i=1;i<=m;i++){
		for(int k=1;k<=p;k++){
			cout<<a[i][k]<<" ";
		} cout<<endl;
	}
}
