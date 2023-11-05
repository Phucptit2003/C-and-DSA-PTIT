#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int>a, pair<int,int>b){
	return a.second>b.second;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int x;
		vector<pair<int,int>>v(n);
		for(auto &i:v){
			cin>>x>>i.first>>i.second;
		}
		sort(v.begin(),v.end(),cmp);
		int vs[1005]={0};
		int cnt=0,tong=0;
		for(auto &i:v){
			while(vs[i.first] && i.first) i.first--;
			if(!vs[i.first]&&i.first){
				cnt++;
				tong+=i.second;
				vs[i.first]=1;
			}
		}
		cout<<cnt<<" "<<tong<<endl;
	}
}

