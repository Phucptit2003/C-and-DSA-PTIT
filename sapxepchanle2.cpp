#include<bits/stdc++.h>

using namespace std;

int main(){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		vector<int>v,v1;
		for(int i=1;i<=n;i++){
			if(i%2==0) v.push_back(a[i]);
			else v1.push_back(a[i]);
		}
		sort(v.begin(),v.end(),greater<int>());
		sort(v1.begin(),v1.end());
		int j=0,k=0;
		for(int i=1;i<=n;i++){
			if(i%2==0){
				cout<<v[j]<<" ";
				j++;
			}
			else{
				cout<<v1[k]<<" ";
				k++;
			}
		}
}

