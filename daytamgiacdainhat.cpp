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
		int c[n],b[n];
		b[0]=1;
		c[n-1]=1;
		for(int i=1;i<n;i++){
			if(a[i]>a[i-1]){
				b[i]=b[i-1]+1;
			}
			else b[i]=1;
		}
		for(int i=n-2;i>=0;i--){
			if(a[i]>a[i+1]){
				c[i]=c[i+1]+1;
			}
			else c[i]=1;
		}
		int ans=0;
		for(int i=0;i<n;i++){
			ans=max(ans,b[i]+c[i]-1);
		}
		cout<<ans<<endl;
	}
}

