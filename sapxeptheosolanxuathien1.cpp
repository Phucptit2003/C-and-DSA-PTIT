#include<bits/stdc++.h>

using namespace std;
int b[10005];
bool tmp(int a,int c){
	if(b[a]==b[c]) return a<c;
	else return b[a]>b[c];
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		memset(b,0,sizeof(b));
		for(int i=0;i<n;i++) {
			cin>>a[i];
			b[a[i]]++;
		}
		sort(a,a+n,tmp);
		for(auto x:a){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}

