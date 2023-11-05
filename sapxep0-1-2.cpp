#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[100000];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		} cout<<endl;
	}
}
