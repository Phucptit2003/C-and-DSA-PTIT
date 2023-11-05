#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
  	string s;
  	cin>>s;
  	int dem=0;
  	while(s.find("100")!=string::npos){
  		auto x=s.find("100");
  		s.erase(s.begin()+x,s.begin()+x+3);
  		dem+=3;
	  }
	  if(dem) cout<<dem<<endl;
  }
  
}

