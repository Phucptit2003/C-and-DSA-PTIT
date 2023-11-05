#include<bits/stdc++.h>
using namespace std;
int main(){
  int test;
  cin>>test;
  while(test--){
  	string s;
  	cin>>s;
  	int l=s.size();
  	int check=1;
  	for(int i=0;i<l;i++){
  		if(s[i]!=s[l-i-1]){
  			check=0;
  			break;
		  }
	  }
	  if(check==0) cout<<"NO\n";
	  else cout<<"YES\n";
  }
}

