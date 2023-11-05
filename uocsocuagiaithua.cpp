#include<bits/stdc++.h>
using namespace std;
int main(){
  int test;
  cin>>test;
  while(test--){
  	long long n;
  	cin>>n;
  	int p;
  	cin>>p;
  	int ans=0;
  	long long tmp=p;
  	while(tmp<=n){
  		ans+=n/tmp;
  		tmp=tmp*p;
	  }
	  cout<<ans<<endl;
  }
}

