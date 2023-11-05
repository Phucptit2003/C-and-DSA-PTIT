#include<iostream>
using namespace std;
int maxxi(int a[],int n){
	int max=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>max) max=a[i];
	}
	return max;
}
void check(int a[],int n){
	int k;
	int b[10000]={0};
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				b[k]++;
			}}}
	int maxxi1=maxxi(b,n);
	for(int i=0;i<n;i++){
		if(b[k]==maxxi1) cout<<a[i];
	}
}
int main(){
	int n;
	cin>>n;
	int a[2000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	check(a,n);
}
