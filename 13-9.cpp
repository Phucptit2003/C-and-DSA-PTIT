#include<bits/stdc++.h>
using namespace std;
int main(){
  int test;
  cin>>test;
  while(test--){
  	int n;
  	cin>>n;
  	int a[n];
  	for(int i=0;i<n;i++){
  		cin>>a[i];
	  }
	sort(a,a+n);
	int max=a[n-1];
	for(int i=0;i<=max+1;i++){
		int dem=0;
		for(int j=0;j<n;j++){
		if(i==a[j]){
			dem++;
			break;
		}
	}
	if(dem==0){
		cout<<i<<endl;
		break;
	}
	}
  }
}

