#include<iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		long long a[1000000];
		int dem=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(a[i]!=0) cout<<a[i]<<" ";
			else dem++;
		}
		for(int i=1;i<=dem;i++){
			cout<<"0"<<" ";
		}
		cout<<endl;
	}
}
