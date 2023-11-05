#include<bits/stdc++.h>

using namespace std;
bool ok;
vector<vector<int>>v;
bool check(vector<int>a,int n,int k){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]==0){
			dem++;
			if(i==n-1&&dem==k) return true;
		}
		else{
			if(dem==k) return true;
			dem=0;
		}
	}
	return false;
}
void sinh(vector<int>a,int n){
	int i=n-1;
	while(i>=0&&a[i]==1) i--;
	if(i<0){
		ok=false;
		return;
	}
	a[i]=1;
	for(int j=i+1;j<=n;j++){
		a[j]=0;
	}
}
int main(){
	int n,k;
	cin>>n>>k;
	vector<int>a(n+1);
	for(int i=0;i<n;i++){
		a[i]=0;
	}
	ok=true;
	while(ok){
		if(check(a,n,k)){
//			for(int i=0;i<n;i++){
//				if(a[i]==0) cout<<"A";
//				else cout<<"B";
//			}
//			cout<<endl;
			v.push_back(a);
		}
		sinh(a,n);
	}
	cout<<v.size()<<endl;
	for(auto x:v){
		for(auto j:x) cout<<j;
		cout<<endl;
	}
	v.clear();
}

