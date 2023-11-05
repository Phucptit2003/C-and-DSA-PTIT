#include<bits/stdc++.h>

using namespace std;
int n,w;
int a[105],c[105];
int vs [105],res=0;
vector<int>v,tmp;
void Try(int i,int sum=0,int gtr=0){
	if(sum>w){
		if(res>gtr-c[i]){
			tmp.clear();
			tmp=v;
		}
		else res=gtr-c[i];
		return;
	}
	
	for(int j=i+1;j<=n;j++){
		v.push_back(a[j]);
		Try(j,sum+a[j],gtr+c[j]);
		v.pop_back();
	}
}
int main(){	
	cin>>n>>w;
	for(int i=1;i<=n;i++){
		cin>>c[i];
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	Try(0);
	cout<<res<<endl;
	for(auto x:tmp) cout<<x<<" ";
}

