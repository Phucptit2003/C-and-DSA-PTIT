#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int maxn=0;
	for(int i=0;i<n;i++){
		maxn=max(a[i][i],max(maxn,a[i][n-1-i]));
	}
	int b[maxn];
	for(int i=0;i<=maxn;i++){
		b[i]=1;
	}
	b[0]=0;
	b[1]=0;
	for(int i=0;i<=sqrt(maxn);i++){
		if(b[i]){
			for(int j=i*i;j<=maxn;j+=i){
				b[j]=0;
			}
		}
	}
	int dem=0;
	for(int i=0;i<n;i++){
		if(b[a[i][i]]==1) dem++;
		if(b[a[i][n-1-i]]==1) dem++;
		if(a[i][i]==a[i][n-1-i]&&b[a[i][i]]==1) dem--;
	}
	cout<<dem;
}

