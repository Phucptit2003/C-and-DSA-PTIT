#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
     ifstream f;
     f.open("DATA.in");
     if(f==NULL){
     	cout<<"co cai nit";
     	return 0;
	 }
	 for(int i=0;i<n;i++){
	 	f>>a[i];
	 }
	 for(int i=0;i<n;i++){
	 	cout<<a[i]<<" ";
	 }
}

