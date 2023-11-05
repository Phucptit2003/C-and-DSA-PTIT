#include<bits/stdc++.h>

using namespace std;	
int n,k,a[100];
vector<char>v;
void Try(int m){
	if(m>=k){
		for(int i=0;i<k;i++){
			cout<<v[a[i]-1];
		}
		cout<<endl;
		return;
	}
	for(int i=a[m-1]+1;i<=n-k+m+1;i++){
		a[m]=i;
		Try(m+1);
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n>>k;
		v.clear();
		for(int i=0;i<n;i++){
			v.push_back(char(i+65));
			a[i]=i;
		}
//		for(auto x:v){
//			cout<<x<<endl;
//		}
		Try(0);
	}
}

