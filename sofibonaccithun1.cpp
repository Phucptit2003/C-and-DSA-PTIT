#include<bits/stdc++.h>

using namespace std;
int P=1e9+7;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int f0=0;
		int f1=1;
		int fn;
		for(int i=2;i<=n;i++){
			fn=(f0+f1)%P;
			f0=f1%P;
			f1=fn%P;
		}
		cout<<fn<<endl;
	}
}

