#include<bits/stdc++.h>

using namespace std;
long long n,i;
int f[100];

void Solve(){
	while(n>2){
		if(i<=f[n-2]) n-=2;
		else{
			i-=f[n-2];
			n--;
		}
	}
	if(n==1) cout<<"A\n";
	else cout<<"B\n";
}
int main(){
	int test;
	cin>>test;
	while(test--){	
		cin>>n>>i;
		f[1]=1;
		f[2]=1;
		for(int i=3;i<93;i++){
			f[i]=f[i-2]+f[i-1];
		}
		Solve();
	}
}

