#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<int>v,v1;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			v.push_back(a[i]);
		}
		else v1.push_back(a[i]);
	}
	sort(v.begin(),v.end());
	sort(v1.begin(),v1.end(),greater<int>());
	int k=0,t=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			cout<<v[k]<<" ";
			k++;
		}
		else {
			cout<<v1[t]<<" ";
			t++;
		}
	}
}

