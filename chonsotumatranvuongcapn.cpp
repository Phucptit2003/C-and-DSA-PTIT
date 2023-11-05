#include<bits/stdc++.h>

using namespace std;
int n,k;
int a[15][15];
vector<vector<int>>ve;
void Try(int i,vector<int>p){
	if(i==n){
		int sum=0;
		int f[15]={0};
		int index=0;
		for(int &j:p){
			if(f[j]==1) return;
			sum+=a[index++][j];
			f[j]=1;
		}
		if(sum==k) ve.push_back(p);
		return;
	}
	for(int k=0;k<n;k++){
		p.push_back(k);
		Try(i+1,p);
		p.pop_back();
	}		
}
int main(){	
	cin>>n>>k;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	vector<int>p;
	Try(0,p);
	cout<<ve.size()<<endl;
	for(auto x:ve){
		for(int k:x) cout<<k+1<<" ";
		cout<<endl;
	}
	ve.clear();
}

