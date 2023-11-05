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
		int x,y;
		vector<pair<int,int>>v;
		for(int i=0;i<n;i++){
			cin>>x>>y;
			v.push_back({x,y});
		}
		sort(v.begin(),v.end(),tmp);
		int res=-1,cnt=0;
		for(int i=0;i<v.size();i++){
			if(v[i].first<res) continue;
			res=v[i].second;
			cnt++;
		}
		cout<<cnt<<endl;
	}
}

