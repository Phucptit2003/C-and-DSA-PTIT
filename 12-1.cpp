#include<bits/stdc++.h>

using namespace std;
int check(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	ifstream f;
	f.open("DAYSO.INP.txt");
	int m,n;
	f>>m>>n;
	int a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			f>>a[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(check(a[i][j])){
				cout<<i<<" ";
				break;
			}
		}
	}
	cout<<endl;
	int k;
	cin>>k;
	while(k>=n)k=k-n;
	int c[m][n];
	for(int j=k;j<n;j++){
		for(int i=0;i<m;i++){
			c[i][j]=a[i][j-k];
		}
	}
	for(int j=0;j<k;j++){
		for(int i=0;i<m;i++){
			c[i][j]=a[i][n-k+j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	f.close();
}


