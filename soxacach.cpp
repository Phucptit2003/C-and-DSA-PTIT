#include<bits/stdc++.h>

using namespace std;
int n,a[100],vs[100];
void Try(int m){
	if(m>n){
		int check=0;
		for(int i=1;i<n;i++){
			if(a[i]==a[i+1]-1||a[i]==a[i+1]+1){
				check=1;
				break;
			}
		}
		if(check==0){
			for(int i=1;i<=n;i++){
				cout<<a[i];
			}
			cout<<endl;
		}
		return;
	}
	for(int i=1;i<=n;i++){
		if(vs[i]==0){
			vs[i]=1;
			a[m]=i;
			Try(m+1);
			vs[i]=0;
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n;
		memset(vs,0,sizeof(vs));
		for(int i=1;i<=n;i++){
			a[i]=i;
		}
		Try(1);
	}
}

