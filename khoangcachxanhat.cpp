#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int maxn[n];
		maxn[n-1]=a[n-1];
		for(int i=n-2;i>=0;i--){
			maxn[i]=max(maxn[i+1],a[i]);
		}
		int ans=-1;
		int i=0,j=0;
		while(i<n&&j<n){
			if(maxn[j]>a[i]){
				ans=max(ans,j-i);
				j++;
			}
			else i++;
		}
		if(!ans) ans=-1;
		cout<<ans<<endl;
	}
}

