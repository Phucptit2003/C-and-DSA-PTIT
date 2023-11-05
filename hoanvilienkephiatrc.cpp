#include<bits/stdc++.h>
using namespace std;
void Hoanvi(int a[],int n){
	int i;
	i=n-1;
    while(i>0&&a[i]<a[i+1]){
		i--;
	}
	if(i==0) return;
	swap(a[i],a[i+1]);
	int l=i+1;
	int r=n;
	while(l<r){
		int tmp=a[l];
		a[l]=a[r];
		a[r]=tmp;
		l++;
		r--;
	}
	for(int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
}
int main(){
  int test;
  cin>>test;
  while(test--){
  	int n;
  	cin>>n;
  	int a[n];
  	for(int i=1;i<=n;i++){
  		cin>>a[i];
	  }
	Hoanvi(a,n);
  }
}

