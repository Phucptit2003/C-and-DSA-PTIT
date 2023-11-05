#include<bits/stdc++.h>

using namespace std;
bool tmp(pair<int,int>a,pair<int,int>b){
	return a.second<b.second;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		vector<pair<int,int>>v(n);
		for(int i=0;i<n;i++) cin>>v[i].first>>v[i].second;
		sort(v.begin(),v.end(),tmp);
		int dem=0;
		int t=0;
		for(int i=0;i<n;i++){
			if(v[i].first<t) continue;
			t=v[i].second;
			dem++;
		}
		cout<<dem<<endl;
	}
}

