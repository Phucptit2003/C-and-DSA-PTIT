#include<bits/stdc++.h>

using namespace std;
int b[1000007]={0};
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[a[i]]++;
	}
	int dem=0;
	for(int i=0;i<n;i++){
		if(b[a[i]]>n/2){
			b[a[i]]=0;
			cout<<a[i]<<" ";
			dem++;
		}
	}
	if(dem==0) cout<<"-1";
}
