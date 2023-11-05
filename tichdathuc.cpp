#include<bits/stdc++.h>

using namespace std;
bool tmp(pair<int,int>v,pair<int,int>v1){
	return v.second<v1.second;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int m,n;
		cin>>m>>n;
		int a[m],b[n];
		for(int i=0;i<m;i++){
			cin>>a[i];
		}
		for(int j=0;j<n;j++){
			cin>>b[j];
		}
		vector<pair<int,int>>v;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				int x=a[i]*b[j];
				int y=i+j;
				v.push_back({x,y});
			}
		}
		sort(v.begin(),v.end(),tmp);
		vector<int>vt;
		vt.push_back(v[0].first);
		for(int i=1;i<v.size()-1;i++){
	//		int x=v[i].first;
			if(v[i].second==v[i+1].second){
				v[i+1].first+=v[i].first;
			}
			else vt.push_back(v[i].first);
		}
		vt.push_back(v[v.size()-1].first);
		for(auto x:vt) cout<<x<<" ";
		cout<<endl;
	}
}

