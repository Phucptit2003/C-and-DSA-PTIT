#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int h;
		cin>>h;
		int a[n*n];
		for(int i=0;i<n*n;i++){
			cin>>a[i];
		}
		sort(a,a+n*n);
		cout<<a[h-1]<<endl;
	}
}
