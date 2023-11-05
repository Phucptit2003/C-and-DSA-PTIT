#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n+3];
	vector<int>L(n+3,0);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		L[a[i]]=L[a[i]-1]+1;
	}
	cout<<n-*max_element(L.begin(),L.end());
}

