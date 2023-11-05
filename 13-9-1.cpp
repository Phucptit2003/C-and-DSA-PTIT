#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
  	cin>>a[i];
  }
  int check=0;
  for(int i=0;i<n;i++){
  	int p=a[i];
  	while(a[i]%2==0){
  		a[i]/=2;
	  }
	  if(a[i]==1){
	  	check=1;
	   cout<<p<<endl;
	   break;}
	   
  }if(check==0) {
	   cout<<"-1";}
}

