#include<bits/stdc++.h>

using namespace std;
int n,m,a[20][20];
vector<string>res;
int dem=0;
void Try(int i,int j){
	//dung lai khi vuot qua gioi han
	if(i>=m||j>=n) return;
	//neu di den duoc vi tri m-1,n-1 thi tang so cach di
	if(i==m-1&&j==n-1){
		dem++;
		return;
	}
	//di theo chieu doc
	Try(i+1,j);
	//di theo chieu ngang
	Try(i,j+1);
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>m>>n;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		// Bat dau tu vi tri 0,0
		Try(0,0);
		cout<<dem;
		cout<<endl;
		dem=0;
	}
}

