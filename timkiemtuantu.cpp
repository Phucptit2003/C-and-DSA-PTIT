#include<iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n,x;
		cin>>n>>x;
		int a[100000];
		int check=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=n;i++){
			if(a[i]==x){
				cout<<i<<endl;
				check=1;
				break;	
			}
		}
	   	if(check==0) cout<<"-1"<<endl;
	}
}
