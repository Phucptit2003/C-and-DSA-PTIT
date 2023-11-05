#include<iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
	int n;
	cin>>n;
	int a[100][100];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==1||j==1||i==n||j==n){
				cout<<a[i][j]<<" ";
			} else cout<<" "<<" ";
		} cout<<"\n";
	}
}
}
