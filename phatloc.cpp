#include <bits/stdc++.h>
using namespace std;

const int N=20;
int n,a[N];
int check(int a[],int n){
	if(n<6) return 0;
	if(a[1]!=0||a[n]!=1) return 0;
	for(int i=1;i<=n-1;i++){
		if(a[i]==a[i+1]&&a[i]==0) return 0;
	}
	for(int i=1;i<=n-3;i++){
		if(a[i]==a[i+1]&&a[i]==a[i+2]&&a[i]==a[i+3]&&a[i]==1){
			return 0;
		}
	}
	return 1;
}
int main() {
    cin>>n;
    for(int i=0;i<=1;i++){
    	a[i]=1;
	}
	while(1){		
		if(check(a,n)){
			for(int i=1;i<=n;i++){
				if(a[i]==0)
				cout<<'8';
				else cout<<'6';
			}
			cout<<endl;
		}
		int i=n;
		while(i>0&&a[i]==0)i--;
		if(i==0) break;
		else a[i]=0;
		for(int j=i+1;j<=n;j++){
			a[j]=1;
		}
	}
    return 0;
}

