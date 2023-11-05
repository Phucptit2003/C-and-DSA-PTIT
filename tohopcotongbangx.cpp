#include<bits/stdc++.h>

using namespace std;
int n,k;
int a[25];
vector<int>tmp;
vector<vector<int>>res;
void Try(int i,int sum=0){
	if(sum>k) return;
	if(sum==k){
		res.push_back(tmp);
		return;
	}
	for(int j=i;j<=n;j++){
		tmp.push_back(a[j]);
		Try(j,sum+a[j]);
		tmp.pop_back();
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		Try(1);
		if(res.size()==0) {
			cout<<-1<<endl;
			continue;
		}
		cout<<res.size()<<" ";
		for(auto x:res){
			cout<<"{";
			for(int i=0;i<x.size();i++){
				if(i!=x.size()-1) cout<<x[i]<<" ";
				else cout<<x[i];
			}
			cout<<"} ";
		}
		cout<<endl;
		tmp.clear();
		res.clear();
	}
}

