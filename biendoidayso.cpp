#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int c=0;
		int d=n-1;
		int dem=0;
		while(c<=d){
			if(a[c]==a[d]){
				c++;
				d--;
			}else if(a[c]<a[d]){
				c++;
				a[c]+=a[c-1];
				dem++;
			} else if(a[c]>a[d]){
				d--;
				a[d]+=a[d+1];
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}
