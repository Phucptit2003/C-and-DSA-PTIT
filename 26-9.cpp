#include<bits/stdc++.h>
using namespace std;
 int n;
 int a[1000];
 int b[10000];
void HoanVi(int m){
	int i;
  if(m>n){
  	for(int i=1;i<=n;i++){
  		cout<<a[i]<<" ";
	  }
	  cout<<endl;
	  return;
  }
  for( i=1;i<=n;i++){
  	if(b[i]==0){
  		a[m]=i;
  		b[i]=1;
  		HoanVi(m+1);
  		b[i]=0;
	  }
  }
}
void lkHoanVi(int a[],int n){
	for(int i=1;i<=n;i++){
		b[i]=0;
	}
	HoanVi(1);
}
int main(){
  cin>>n; 
  lkHoanVi(a,n);
}

