#include<bits/stdc++.h>

using namespace std;
int n,k;
int a[1000];
vector<vector<int>>tmp;
vector<int>v;

bool srt(vector<int>a,vector<int>b){
	return a.size()<b.size();
}
void QL(int i,int sum=0){
	if(sum>k) return;
	if(sum==k){
		tmp.push_back(v);
		return;
	}
	for(int j=i-1;j>0;j--){
		v.push_back(a[j]);
		QL(j,sum+a[j]);
		v.pop_back();
	}
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	QL(n+1);
//	sort(tmp.begin(),tmp.end(),srt);
	for(auto x:tmp){
		for(int j=x.size()-1;j>=0;j--){
			cout<<x[j]<<" ";
		}
		cout<<endl;
	}
	cout<<tmp.size()<<endl;
}

