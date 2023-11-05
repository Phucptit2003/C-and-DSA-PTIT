#include<iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		int x;
		cin>>n>>x;
		int a[100000];
		int dem=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(a[i]==x) dem++;
		}
		if(dem==0) cout<<"-1"<<endl;
		else cout<<dem<<endl;
	}
}
