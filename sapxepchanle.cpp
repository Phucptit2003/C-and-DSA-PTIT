#include<bits/stdc++.h>
using namespace std;
bool tmp(int a,int b){
	return a>b;
}
int main(){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		vector<int>v;
		vector<int>v1;
		for(int i=0;i<n;i+=2){
			v.push_back(a[i]);
		}
		for(int i=1;i<n;i+=2){
			v1.push_back(a[i]);
		}
		int m=n;
		sort(v.begin(),v.end());
		sort(v1.begin(),v1.end(),tmp);
		for(int i=0;i<n/2;i++) cout<<v[i]<<" "<<v1[i]<<" ";
		if(n%2==1) cout<<v.back()<<" ";
}
