#include<bits/stdc++.h>

using namespace std;
int n,k;
int a[15];
vector<int>tong(15);
int thuong,dem=0;
void Try(int i,int cnt=0){
	if(cnt==k){
		dem+=i ==n;
		return;
	}
	for(int j=i+1;j<=n;j++){
		if(tong[j]-tong[i]==thuong)
			Try(j,cnt+1);
	}
}
int main(){	
	cin>>n>>k;
	int sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		tong[i]=tong[i-1]+a[i];
	}
	if(tong[n]%k!=0) return 0;
	thuong = tong[n] / k;
	Try(0);
	cout<<dem<<endl;	
}

