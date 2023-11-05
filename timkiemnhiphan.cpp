#include<iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n,x;
		cin>>n>>x;
		int a[100000];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int check=0;
		for(int i=0;i<n;i++){
			if(a[i]==x){
				check=1;
				break;
			}
		} if(check==0) cout<<"-1\n";
		else cout<<"1\n";
	}
}
