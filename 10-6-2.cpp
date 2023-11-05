#include<bits/stdc++.h>

using namespace std;
int n,k;
vector<char>v;
vector<vector<char>>tmp;
bool check(int a[]){
	int dem=0;
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(a[i]==0){
			dem++;
			if(dem==k&&i==n) cnt++;
		}
		else {
			if(dem==k) cnt++;
			dem=0;
		}
	}
	if(cnt==1) return true;
	else return false;
}
int main(){
	cin>>n>>k;
	int a[n+1];	
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
	while(1){
		if(check(a)){
			for(int i=1;i<=n;i++){
				v.push_back(char(a[i]+65));
			}
			tmp.push_back(v);
			v.clear();
		}
		int j=n;
		while(a[j]==1) j--;
		if(j==0) break;
		a[j]=1;
		for(int k=j+1;k<=n;k++) a[k]=0;
	}
	cout<<tmp.size()<<endl;
	for(auto x:tmp){
		for(auto j:x){
			cout<<j;
		}
		cout<<endl;
	}
}

