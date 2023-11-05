#include<iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n,m;
		cin>>n>>m;
		int a[1000];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		while(m--){
			int l,r;
			cin>>l>>r;
			long long sum=0;
			for(int i=l;i<=r;i++) sum+=a[i];
			cout<<sum<<endl;
		}
	}
}
