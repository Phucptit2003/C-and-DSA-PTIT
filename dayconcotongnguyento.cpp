#include<bits/stdc++.h>

using namespace std;
int n;
int a[20];
vector<vector<int>>v;
vector<int>tmp;
bool check(int sum){
	if(sum<2) return false;
	for(int i=2;i<=sqrt(sum);i++){
		if(n%i==0) return false;
	}
	return true;
}

void Try(int i,vector<int>tmp,int sum){
	for(int j=i+1;j<=n;j++){
		tmp.push_back(a[j]);
		if(check(sum+a[j])){
			v.push_back(tmp);
		}
		Try(j,tmp,sum+a[j]);
		tmp.pop_back();
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		Try(0,tmp,0);
		for(int i=0;i<v.size();i++){
			sort(v[i].begin(),v[i].end(),greater<int>());
		}
		sort(v.begin(),v.end());
		for(auto x:v){
			for(auto j:x){
				cout<<j<<" ";
			}
			cout<<endl;
		}
	}
}

