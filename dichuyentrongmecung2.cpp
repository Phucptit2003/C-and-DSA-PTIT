#include<bits/stdc++.h>

using namespace std;
int n,a[100][100],used[100][100];
bool check;
vector<string>res;
void Try(int i,int j,string s=""){
	if(i==n-1&&j==n-1){
		res.push_back(s);
		return;
	}
	if(a[i+1][j]==1&&i!=n-1&&used[i+1][j]==0){
		used[i][j]=1;
		Try(i+1,j,s+"D");
		used[i][j]=0;
	}
	if(a[i][j-1]==1&&j!=0&&used[i][j-1]==0){
		used[i][j]=1;
		Try(i,j-1,s+"L");
		used[i][j]=0;
	}
	if(a[i][j+1]==1&&j!=n-1&&used[i][j+1]==0){
		used[i][j]=1;
		Try(i,j+1,s+"R");
		used[i][j]=0;
	}
	if(a[i-1][j]==1&&i!=0&&used[i-1][j]==0){
		used[i][j]=1;
		Try(i-1,j,s+"U");
		used[i][j]=0;
	}	
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n;
		res.clear();
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
				used[i][j]=0;
			}
		}
		if(a[0][0]==0||a[n-1][n-1]==0) cout<<-1<<endl;
		else {
			Try(0,0);
			if(res.empty()){
				cout<<-1<<endl;
			}
			else{
				for(auto &i: res){
					cout<<i<<" ";
				}
				cout<<endl;
			}
		}
	}
}

