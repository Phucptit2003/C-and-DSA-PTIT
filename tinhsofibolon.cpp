#include<bits/stdc++.h>
using namespace std;
const long r=pow(10,9)+7;
long long f[1001];
int main(){
  int test;
  cin>>test;
  while(test--){
  	int n;
  	cin>>n;
  	f[0]=0;
  	f[1]=1;
  	for(int i=2;i<=n;i++){
  		f[i]=f[i-1]+f[i-2];
  		f[i]%=r;
	  }
	cout<<f[n]<<endl;
  }
}

