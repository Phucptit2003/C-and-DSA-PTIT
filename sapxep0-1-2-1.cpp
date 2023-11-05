#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
	int t;
	cin>>t; 
	while(t--){ 
		int n; 
		cin>>n; 
		int a[n+5]; 
		for(int i=1;i<=n;i++) cin>>a[i]; 
		sort(a+1,a+n+1); 
		for(int j=1;j<=n;j++){ 
			cout<<a[j]<<" "; 
		} 
		cout<<endl; 
	} 
}
