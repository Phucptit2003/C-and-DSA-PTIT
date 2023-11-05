#include<bits/stdc++.h>//Rte

using namespace std;	
int n,k,a[100];
set<string>se;
vector<string>v;
void Try(int m){
	if(m>=k){
		for(int i=0;i<k;i++){
			cout<<v[a[i]-1]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i=a[m-1]+1;i<=v.size()-k+m+1;i++){
		a[m]=i;
		Try(m+1);
	}
}
int main(){
	cin>>n>>k;
	string s;
	for(int i=0;i<n;i++){
		cin>>s;
		se.insert(s);
		a[i]=i;
	}
	for(auto x:se){
		v.push_back(x);
	}
	Try(0);
//	sort(se.begin(),se.end());
//	for(auto x:v){
//		cout<<x<<" ";
//	}
}

