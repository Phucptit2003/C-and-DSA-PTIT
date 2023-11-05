#include<bits/stdc++.h>

using namespace std;
int n,k;
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		unordered_map<int,int>mp;
		int cnt=0;
		for(int i=0;i<n;i++){
			if(mp.find(k-a[i])!=mp.end()){
				cnt+=mp[k-a[i]];
			}
			mp[a[i]]++;
		}
		cout<<cnt<<endl;
	}
}

