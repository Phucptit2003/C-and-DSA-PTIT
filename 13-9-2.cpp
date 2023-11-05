#include<bits/stdc++.h>
using namespace std;
int main(){
       int n,m;
       cin>>n>>m;
       int a[n][m];
       for(int i=1;i<=n;i++){
       	for(int j=1;j<=m;j++){
       		cin>>a[i][j];
		   }
	   }
	   int dem=0;
	   int sum=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(j<1||j>m||i<1||i>n) a[i][j]=-1000;
			if(a[i][j]>a[i+1][j]&&a[i][j]>a[i][j+1]&&a[i][j]>a[i-1][j]&&a[i][j]>a[i][j-1]){
				if(a[i][j]>a[i-1][j-1]&&a[i][j]>a[i-1][j+1]&&a[i][j]>a[i+1][j-1]&&a[i][j]>a[i+1][j+1])
				dem++;
			}
			}

}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(j<1||j>m||i<1||i>n) a[i][j]=1000;
				if(a[i][j]<a[i+1][j]&&a[i][j]<a[i][j+1]&&a[i][j]<a[i-1][j]&&a[i][j]<a[i][j-1]){
						if(a[i][j]<a[i-1][j-1]&&a[i][j]<a[i-1][j+1]&&a[i][j]<a[i+1][j-1]&&a[i][j]<a[i+1][j+1])
				dem++;
			}

}}
		cout<<dem;
	}


