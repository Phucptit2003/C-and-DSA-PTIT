#include<bits/stdc++.h>

using namespace std;

int a[1005][1005];
void check(int t,int x,int y,int z){
	long long tong=0;
	if(t==1){	
		for(int i=y;i<=z;i++){
			tong+=a[x][i];
		}
		cout<<tong<<endl;
	}
	if(t==2){
		for(int i=y;i<=z;i++){
			tong+=a[i][x];
		}
		cout<<tong<<endl;
	}
}
int main(){
	int n,m,q;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	
	cin>>q;
	for(int i=0;i<q;i++){
		int t,x,y,z;
		cin>>t,x,y,z;
		check(t,x,y,z);
	}
}

