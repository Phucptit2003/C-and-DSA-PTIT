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
		vector<int>f (n,1);
		for(auto x:f){
			cout<<x<<" ";
		}
		cout<<endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
				if(a[i]>=a[j]){
					f[i]=max(f[i],f[j]+1);
				}
			}
		}
		cout<<n-*max_element(f.begin(),f.end())<<endl;
	}
}
