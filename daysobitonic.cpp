#include<bits/stdc++.h>

using namespace std;

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
		int res;
		int dpL[n],dpR[n];
		for(int i=0;i<n;i++){
		    dpL[i]=a[i];
			for(int j=0;j<i;j++){
				if(a[j]<a[i]){
					dpL[i]=max(dpL[i],dpL[j]+a[i]);
				}
			}
		}
		for(int i=n-1;i>=0;i--){
			dpR[i]=a[i];
			for(int j=n-1;j>i;j--){
				if(a[i]>a[j]){
					dpR[i]=max(dpR[i],dpR[j]+a[i]);
				}
			}
		}
		res=-1;
		for(int i=0;i<n;i++){
			res=max(res,dpR[i]+dpL[i]-a[i]);
		}
		cout<<res<<endl;
	}
}

