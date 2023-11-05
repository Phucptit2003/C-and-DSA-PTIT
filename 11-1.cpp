#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int *a;
	a=new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int *b=new int[n+1];
	int x,k;
	cin>>k>>x;
	k--;
	for(int i=0;i<=k;i++){
		b[i]=a[i];
		b[k]=x;
	}
	for(int i=k+1;i<=n;i++){
		b[i]=a[i-1];
	}
	delete a;
	n++;
	a =new int [n];
	for(int i=0;i<n;i++){
		a[i]=b[i];
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

