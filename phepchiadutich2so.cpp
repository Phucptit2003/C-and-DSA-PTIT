#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
  string a;
  long long int b,c,res=0;
  cin>>a>>b>>c;
  for(int i=0;i<a.size();i++){
  	res=(res*10+b*(a[i]-'0'))%c;
  }
  cout<<res<<endl;
}}

