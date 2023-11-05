#include<bits/stdc++.h>

using namespace std;	
int n;int a[50];
void Try(int m){
	if(m>n)	return;
	if(m%2==0){
		int check=1;
		for(int k=1;k<=m/2;k++){
			if(a[k]!=a[m-k]){
				check=0;
				break;
			}
		}
		if(check==1){
			for(int i=1;i<=m;i++){
				cout<<a[i];
			}
			cout<<" ";
		}
	}
	int i=n;
	while(i>0&&a[i]==1) i--;
	if(i==0) return;
	else a[i]=1;
	for(int j=i+1;j<=n;j++){
		a[j]=0;
	}
	Try(m+1);
}
int main(){
	int test;
	cin>>test;
	while(test--){	
		cin>>n;		
		for(int i=1;i<=n;i++) a[i]=0;
		Try(1);
		cout<<endl;
	}
}

