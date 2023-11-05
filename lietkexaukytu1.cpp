#include<bits/stdc++.h>

using namespace std;
char c;int k,n,a[30];
void Try(int m){
	if(m>k){
		for(int i=1;i<=k;i++){
			cout<<a[i];
		}
		cout<<endl;
	}
	int i=k;
	while(a[i]>n-k+i) i--;
	if(i==0) return;
	a[i]=a[i]+1;
	for(int j=a[m-1];j<=n-k+i;j++){
		a[j]=a[i]+j-i;
	}
	Try(m+1);
}
int main(){	
	cin>>c>>k;
	n=c-'A'+1;
//	for(int i=1;i<=n;i++){
//		a[i]=i;
//	}
	Try(1);
}

