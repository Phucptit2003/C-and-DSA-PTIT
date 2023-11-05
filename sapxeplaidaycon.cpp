#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		int b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(a,a+n);
		int t1=0;
		int t2=0;
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
				t1=i;
				break;
			} 
		}
		for(int i=n-1;i>0;i--){
			if(a[i]!=b[i]){
				t2=i;
				break;
			}
		}
		cout<<t1+1<<" "<<t2+1<<endl;
	}
}
