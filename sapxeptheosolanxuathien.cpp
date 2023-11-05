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
	 multimap<int,int>mp;
	 sort(a,a+n,greater<int>());
	 for(int i=0;i<n;i++){
	 	int dem=1;
	 	while(a[i]==a[i+1]){
	 		dem++;
	 		i++;
		 }
		mp.insert({dem,a[i]});}
		int b[n];
		int k=0;
		for(auto &it:mp){
			for(int i=0;i<it.first;i++){
				b[k]=it.second;
				k++;
			}
		}
		reverse(b,b+n);
		for(int i=0;i<n;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	 }
 }

