#include<bits/stdc++.h>

using namespace std;
int n,k,a[20],b[20];
vector<string>v;
void Try(int m,int t,int dem){
	for(int i=m;i<=n;i++){
		if(dem+a[i]<=k){
			b[t]=a[i];
			dem+=a[i];
			if(dem==k){
				string s="[";
				for(int j=1;j<=t;j++){
					if(j!=t) s+=to_string(b[j])+" ";
					else s+=to_string(b[j]);
				}
				s+="]";
				v.push_back(s);
			}
			else Try(i+1,t+1,dem);
			dem-=a[i];
		}
	}	
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n>>k;
		memset(a,0,sizeof(a));
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		v.clear();
		sort(a+1,a+n+1);
		Try(1,1,0);
		if(v.size()==0) cout<<"-1\n";
		else{
			for(auto x:v){
				cout<<x<<" ";
			}
			cout<<endl;
		}
	}
}

