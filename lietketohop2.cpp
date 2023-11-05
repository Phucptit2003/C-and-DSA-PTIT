#include<bits/stdc++.h>

using namespace std;
const int maxN=1e3+1;
int a[maxN];	
int n,k;
set<int>se;
int check;
vector<int>v;
void Sinh(){
	int i=k;
	while(i>=1&&a[i]==se.size()-k+i)i--;
	if(i==0) check=0;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
}
int main(){
	cin>>n>>k;
	int t;
	for(int i=0;i<n;i++){
		cin>>t;
		se.insert(t);
	}
	for(auto x:se){
		v.push_back(x);
	}
	for(int i=1;i<=k;i++) a[i]=i;
	check=1;
	while(check){
		for(int i=1;i<=k;i++) cout<<v[a[i]-1]<<" ";
		cout<<endl;
		Sinh();
	}
}

