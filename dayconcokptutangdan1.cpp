#include<bits/stdc++.h>

using namespace std;
int n,k;
int a[20],v[20];
void Try(int i){
	if(i>k){
		for(int i=1;i<=k;i++){
			cout<<a[v[i]]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int j=v[i-1]+1;j<=n-k+i;j++){
		v[i]=j;
		Try(i+1);
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+n+1);
		Try(1);
	}
}

