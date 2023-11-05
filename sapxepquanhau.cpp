#include<bits/stdc++.h>

using namespace std;
int n,cnt;
int a[100],c[100],b[100];
void Try(int i){
	for(int j=1;j<=n;j++){
		if(c[j]==0&&a[i-j+n]==0&&b[i+j-1]==0){
			c[j]=1;
			a[i-j+n]=1;
			b[i+j-1]=1;
			if(i==n){
				cnt++;
			}
			else Try(i+1);
			c[j]=0;
			a[i-j+n]=0;
			b[i+j-1]=0;
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		memset(c,0,sizeof(c));
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		cin>>n;
		cnt=0;
		Try(1);
		cout<<cnt<<endl;
	}
}
