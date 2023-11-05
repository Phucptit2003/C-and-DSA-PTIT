#include<bits/stdc++.h>

using namespace std;
int n,a[20][20];
vector<string>res;
bool check;
void Try(int i,int j,string s){
	if(i==0&&j==0&&a[i][j]==0){
		check=false;
		return;
	}
	if(i==n-1&&j==n-1&&a[n-1][n-1]){
		res.push_back(s);
		check=true;
		return;
	}
	if(i<n-1&&a[i+1][j]){
		Try(i+1,j,s+"D");
	}
	if(j<n-1&&a[i][j+1]){
		Try(i,j+1,s+"R");
	}
	if(i<n-1&&j<n-1&&a[i+1][j]==0&&a[i][j+1]==0||i>n-1||j>n-1) return;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		res.clear();
		check=false;
		Try(0,0,"");
		if(check==false){
			cout<<-1<<endl;
		}
		else{
			sort(res.begin(),res.end());
			for(auto x:res){
				cout<<x<<" ";
			}
			cout<<endl;
		}
	}
}

