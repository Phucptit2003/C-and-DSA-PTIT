#include<bits/stdc++.h>

using namespace std;

bool tmp(pair<pair<int,int>,float>a, pair<pair<int,int>,float>b){
	return a.second>b.second;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n,w;
		cin>>n>>w;
		vector<pair<pair<int,int>,float>>v(n);
		for(pair<pair<int,int>,float> &i:v){
			cin>>i.first.first>>i.first.second;
			i.second=1.0*i.first.first/i.first.second;
		}
		sort(v.begin(),v.end(),tmp);
		int ind,Val=0;
		float Weg=0;
		for(int i=0;i<n;i++){
			if(Val<=w){
				Val+=v[i].first.second;
				Weg+=v[i].first.first;
				ind=i;
			}
		}
		if(Val>w) Weg-=1.0*(Val-w)*v[ind].second;
		cout<<setprecision(2)<<fixed<<Weg<<endl;
	}
}

