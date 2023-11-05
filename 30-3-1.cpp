#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b){
	return a.second<b.second;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		vector<pair<int,int>>v(n);
		for(auto &i:v){
			cin>>i.first>>i.second;
		}
		sort(v.begin(),v.end(),cmp);
		int t=0,dem=0;
		for(auto i:v){
			if(i.first<t) continue;
			t=i.second;
			dem++;
		}
		cout<<dem<<endl;
	}
}

