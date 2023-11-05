#include<bits/stdc++.h>

using namespace std;
int t,n,p,s;
int f[205],vs[205];
vector<int>v;
vector<string>res;
void QL(int m){
	if(m>=n){
		for(int i=0;i<n;i++){
			cout<<v[i]<<" ";
		}
		return;
	}
	for(int i=v[m-1]+1;i<t-n+m;i++){
		QL(i);
	}
}
int main(){
	f[0]=1;
	f[1]=1;
	for(int i=2;i<=sqrt(200);i++){
		if(f[i]==0){
			for(int j=i*i;j<=n;j++){
				f[j]=1;
			}
		}
	}
	int test;
	cin>>test;
	while(test--){
//		v.clear();
//		memset(vs,0,sizeof(vs));
		v[-1]=0;
		cin>>n>>p>>s;
		for(int i=p+1;i<=s;i++){
			if(f[i]==0){
				v.push_back(i);
			}
		}
		t=v.size();
		QL(0);
	}
}

