#include<iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n,m;
		cin>>n>>m;
		int a[100000];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=n;i++){
			if(a[i]==m) cout<<i<<endl;
		}
	}
}
