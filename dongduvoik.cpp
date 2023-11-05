#include<bits/stdc++.h>
using namespace std;
int main(){
  int test;
  cin>>test;
  while(test--){
  	int n;
  	cin>>n;
  	int a[n];
  	int nhonhat=1e9+7;
  	for(int i=0;i<n;i++){
  		cin>>a[i];
  		nhonhat=min(a[i],nhonhat);
	  }
    int s=a[0]-nhonhat;
    int dem=0;
    for(int i=1;i<n;i++){
    	s=__gcd(s,a[i]-nhonhat);
	}
	for(int i=1;i<=sqrt(s);i++){
		if(s%i==0){
			if(i!=s/i) dem=dem+2;
			else dem++;
		}
	}
	cout<<dem<<endl;
  }
}

