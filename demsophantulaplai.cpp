#include<bits/stdc++.h>
using namespace std;
int b[10000005]={0};
int main(){
	int test;
	cin>>test;
	while(test--){ 
		int n;
		cin>>n;
		memset(b,0,sizeof(b));
		int a[n];
	   for(int i=0;i<n;i++){
	   	cin>>a[i];
	   	b[a[i]]++;
	   }
	   int dem=0;	
	   for(int i=0;i<n;i++){
	   	if(b[a[i]]>=2) dem++;
	   }
	   cout<<dem<<endl;
	}
}
