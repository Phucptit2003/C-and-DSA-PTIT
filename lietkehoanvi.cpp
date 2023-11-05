#include<bits/stdc++.h>
using namespace std;
int main(){
 int test;
 cin>>test;
 while(test--){
 	int n;
 	cin>>n;
	 int a[n+5];
 	for(int i=1;i<=n;i++){
 		a[i]=i;
	 }
	 do{
	 	for(int i=1;i<=n;i++){
	 		cout<<a[i];
		 }
		 cout<<" ";
	 } while(next_permutation(a+1,a+n+1));
	 cout<<endl;
 }
}

