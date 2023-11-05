#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		int sum=0;
		int sumtong=0;
		int check=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sumtong+=a[i];
		}
		for(int i=0;i<n-1;i++){
			sum+=a[i];
		} 
		int t=sumtong-sum;
		for(int j=1;j<n-1;j++){
		if(sum-t==a[n-j-1]){
			check=1;
			cout<<n-j<<endl;
			break;
		} else {
		sum-=a[n-j-1];
		t+=a[n-1-j];
	}
	}
	if(check==0) cout<<"-1\n";
	}
}
