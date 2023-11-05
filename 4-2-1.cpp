#include<iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[100];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(a[i]!=a[n-1-i]){
				cout<<"NO\n";
				return 0;
			}
		}
		cout<<"YES\n";
	}
}
