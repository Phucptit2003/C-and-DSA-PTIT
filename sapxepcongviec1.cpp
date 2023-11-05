#include<bits/stdc++.h>

using namespace std;
bool tmp(pair<int,int>a,pair<int,int>b){
	return a.second<b.second;
}
int main(){
	int test;
	cin>>test;
	int n;
	while(test--){
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		vector<pair<int,int>>v;
		for(int i=0;i<n;i++){
			v.push_back({a[i],b[i]});
		}
		sort(v.begin(),v.end(),tmp);
		int cnt=0;
		int t=0;
		for(int i=0;i<n;i++){
			if(v[i].first<t) continue;
			t=v[i].second;
			cnt++;
		}
		cout<<cnt<<endl;
	}
}

