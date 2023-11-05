#include<bits/stdc++.h>

using namespace std;
const int P=1e9+7;
const int maxn=1e6;
int f[maxn];
int main(){
	f[0]=0;
	f[1]=1;
	for(int i=2;i<=maxn;i++){
		f[i]=(f[i-1]+f[i-2])%P;
	}
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		cout<<f[n]<<endl;
	}
}

