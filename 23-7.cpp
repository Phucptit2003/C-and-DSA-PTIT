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
		int inc[n];
		int dec[n];
		inc[0]=1;
		for(int i=1;i<n;i++){
			if(a[i]>a[i-1]){
				inc[i]=inc[i-1]+1;
			}
			else inc[i]=1;
		}
		dec[n-1]=1;
		for(int i=n-2;i>=0;i--){
			if(a[i]>a[i+1]){
				dec[i]=dec[i+1]+1;
			}
			else dec[i]=1;
		}
		int res=0;
		for(int i=0;i<n;i++){
			res=max(res,inc[i]+dec[i]-1);
		}
		cout<<res<<endl;
	}
}

