#include<bits/stdc++.h>
using namespace std;
int main(){
 int test;
 cin>>test;
 while(test--){
 	int n,m;
 	cin>>n>>m;
 	int a[n*n];
 	for(int i=0;i<n*n;i++){
 		cin>>a[i];
	 }
	sort(a,a+n*n);
	cout<<a[m-1]<<endl;
 }
}

