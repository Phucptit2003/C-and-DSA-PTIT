#include<bits/stdc++.h>

using namespace std;
int ans,n=8;
int c[20],h[20];
int f[10];
vector<vector<int>>a(9,vector<int>(9));
void Try(int i,int sum=0){
	if(i>n){
		ans=max(ans,sum);
		return;
	}
	for(int j=1;j<=n;j++){
		if(!f[j]&&!c[j+i-1]&& !h[j-i+n]){
			f[j]=1;
			c[j+i-1]=1;
			h[j-i+n]=1;
			Try(i+1,sum+a[i][j]);
			f[j]=0;
			c[i+j-1]=0;
			h[j-i+n]=0;
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		ans=0;
		for(int i=1;i<=8;i++){
			for(int j=1;j<=8;j++){
				cin>>a[i][j];
			}
		}
		Try(1);
		cout<<ans<<endl;
	}
}

