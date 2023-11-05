#include<bits/stdc++.h>
using namespace std;
int main(){
  int test;
  cin>>test;
  while(test--){
  	string s;
  	cin>>s;
  	int res=0,count=0;
  	int max=0;
  	for(int i=0;i<s.size();i++){
  		if(s[i]>='0'&&s[i]<='9'){
  			res=res*10+s[i]-'0';
		  }
		else {
			count =res;
			res=0;
		}
		if(count>max) max=count;
	  }
	  cout<<max<<endl;
  }
}

