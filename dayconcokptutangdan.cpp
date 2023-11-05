#include<bits/stdc++.h>

using namespace std;
int a[20],v[20],dp[20];
int n,k;
vector<int> s;
bool check(vector<int>&v){
	for(int i=0;i<v.size()-1;i++){
		if(v[i]>v[i+1]) return false;
	}
	return true;
}
void QL(int i){
	if(s.size()>k) return;	
	if(s.size()==k){
		if(check(s)){
			for(auto x:s){
				cout<<x<<" ";
			}
			cout<<endl;
		}
		return;
	}
	dp[i]=1;
	for(int j=v[i-1]+1;j<=n-k+i;j++){
		if(dp[j]==0){
			v[i]=j;
			dp[j]=1;
			s.push_back(a[i]);
			QL(i+1);
			s.pop_back();
			dp[j]=0;
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			v[i]=i;
			dp[i]=0;
		}
		QL(1);
		memset(v,0,sizeof(v));
		s.clear();
	}
}

