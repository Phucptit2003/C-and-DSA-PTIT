#include<bits/stdc++.h>

using namespace std;
int n;
int a[20];
vector<int>v;
vector<vector<int>>tmp;
bool check(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
void Try(int i,int sum=0){
	if(check(sum)){
		tmp.push_back(v);
//		return;
	} 
	for(int j=i+1;j<=n;j++){
		v.push_back(a[j]);
		Try(j,sum+a[j]);
		v.pop_back();
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){	
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+n+1,greater<int>());
		Try(0);
		sort(tmp.begin(),tmp.end());
		for(auto x:tmp){
			for(auto j:x) cout<<j<<" ";
			cout<<endl;
		}
		tmp.clear();
		v.clear();
	}
}

