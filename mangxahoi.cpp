#include<bits/stdc++.h>

using namespace std;
int n,m,x,y;

int main(){
	int test;
	cin>>test;
	while(test--){		
		cin>>n>>m;
		int dp[n+1]={0};
		vector<int>v[n+1];
		for(int i=1;i<=m;i++){
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		bool check=true;
		for(int i=1;i<=n;i++){
			for(auto j:v[i]){
				if(v[i].size()!=v[j].size()){
					cout<<"NO\n";
					check=false;
					break;
				}
			}
			if(check==false) break;
		}
		if(check==true) cout<<"YES\n";
	}
}

