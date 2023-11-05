#include<bits/stdc++.h>

using namespace std;
int n,a[20][20],dp[20],res=1e9+7;
vector<int>v;
vector<int>tmp;
void Try(int k,int cnt=1,int sum=0){
	if(sum>res) return;
	if(cnt==n){
		if(res>sum+a[k][1]){
			res=sum+a[k][1];
			tmp.clear();
			for(auto x:v){
				tmp.push_back(x);
			}
		}
		return;
	}
	for(int i=1;i<=n;i++){
		if(!dp[i]){
			v.push_back(i);
			dp[i]=1;
			Try(i,cnt+1,sum+a[k][i]);
			dp[i]=0;
			v.pop_back();
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	dp[1]=1;
	v.push_back(1);
	Try(1);
	tmp.push_back(1);
	cout<<"(";
	for(int i=0;i<tmp.size();i++){
		if(i!=tmp.size()-1)
			cout<<tmp[i]<<", ";
		else cout<<tmp[i];
	}	
	cout<<")"<<endl;
	cout<<res<<endl;
}

