#include<bits/stdc++.h>

using namespace std;
int dp[205];
vector<int>v;
vector<int>ve;
vector<vector<int>>tmp;
int n,p,s;

void Sang(){
	for(int i=2;i<=200;i++){
		if(dp[i]==0){
			for(int j=i*i;j<=200;j+=i){
				dp[j]=1;
			}
		}
	}
	for(int i=2;i<=200;i++){
		if(dp[i]==0){
			v.push_back(i);
		}
	}
}
void QL(int i,int cnt=0){
	if(cnt>s) return;
	if(cnt==s){
		if(ve.size()==n)
			tmp.push_back(ve);
		return;
	}
	for(int j=i;j<v.size();j++){
			ve.push_back(v[j]);
			QL(j+1,cnt+v[j]);
			ve.pop_back();
	}
}
int main(){
	Sang();
	int test;
	cin>>test;
	while(test--){		
		cin>>n>>p>>s;
		int k=upper_bound(v.begin(),v.end(),p)-v.begin();
//		cout<<k<<endl;
		QL(k);
		cout<<tmp.size()<<endl;
		for(auto &j:tmp){
			for(auto i:j) cout<<i<<" ";
			cout<<endl;
		}
		tmp.clear();
		ve.clear();
	}
}

