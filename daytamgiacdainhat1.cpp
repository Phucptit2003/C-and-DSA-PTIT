#include<bits/stdc++.h>

using namespace std;
long long Catalan(int n){
	
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int maxn[n],minn[n];
		maxn[0]=minn[n-1]=1;
		for(int i=1;i<n;i++){
			if(a[i]>a[i-1])
				maxn[i]=maxn[i-1]+1;
			else maxn[i]=1;
		}
		for(int i=n-2;i>=0;i--){
			if(a[i]>a[i+1])
				minn[i]=minn[i+1]+1;
			else minn[i]=1;
		}
		int res=-1;
		for(int i=0;i<n;i++){
			res=max(res,maxn[i]+minn[i]-1);
		}
		cout<<res<<endl;
	}
}

