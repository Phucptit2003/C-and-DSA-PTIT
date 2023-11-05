#include<bits/stdc++.h>
using namespace std;
bool comp(const int a,const int b){
	return a>b;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		int a[100];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n,comp);
		for(int i=0;i<k;i++){
			cout<<a[i]<<" ";
		} cout<<endl;
	}
}
