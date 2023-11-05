#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<pair<int,int>>v;
	int x,y;
	for(int i=1;i<=n;i++){
		cin>>x>>y;
		v.push_back({x,y});
	}
	vector<int>ve(n,1);
	for(int i=0;i<v.size();i++){
		for(int j=0;j<i;j++){
			if(v[i].first>v[j].first&&v[i].second>v[j].second){
				ve[i]=max(ve[i],ve[j]+1);
			}
		}
	}
	cout<<*max_element(ve.begin(),ve.end())<<endl;
}

