#include<bits/stdc++.h>
using namespace std;
int check(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	} return 1;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int m,n;
		cin>>m>>n;
		for(int i=m;i<=n;i++){
			if(check(i)==1) cout<<i<<" ";
		} cout<<endl;
	}
}
