#include<bits/stdc++.h>

using namespace std;
int m,n,cnt;
int a[105][105];
int vs[105][105];

void QL(int i,int j){
	if(i>m||j>n) return;
	if(i==m&&j==n) {
		cnt++;
		return;
	}
	QL(i+1,j);
	QL(i,j+1);
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>m>>n;
		cnt=0;
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
				vs[i][j]=0;
			}
		}
		QL(1,1);
		cout<<cnt<<endl;
	}
}

