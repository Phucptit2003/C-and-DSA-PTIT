#include<bits/stdc++.h>
using namespace std;
int main(){
  int test;
  cin>>test;
  while(test--){
  	string a;
  	long long b,m;
  	cin>>a>>b>>m;
  	long long dem=0;
  	for(int i=0;i<a.size();i++){
  		dem=(dem*10+(a[i]-'0'))%m;
	  }
	  cout<<dem<<endl;
	  long long sum=dem;
	for(int i=0;i<b-1;i++){
		dem=dem*sum;
	}
	cout<<dem%m<<endl;
  }
}

