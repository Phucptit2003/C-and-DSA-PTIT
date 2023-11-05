#include<bits/stdc++.h>
using namespace std;
int main(){
      int test;
      cin>>test;
      vector<string>v;
      while(test--){
      	string s;
      	cin>>s;
      	v.push_back(s);
	  }
	  
	  for(int i=0;i<v.size();i++){
	  int dem=0;
	  int dem1=1;
	  long long tong=0;
	  	for(int j=v[i].size()-1;j>=0;j--){
	  		if(v[i][j]=='1'){
	  			for(int k=0;k<dem;k++){
	  				dem1*=2;
				  }
				tong+=dem1;
			  }
			  dem++;
			  dem1=1;
		  }
		  cout<<tong<<endl;
	  }
}

