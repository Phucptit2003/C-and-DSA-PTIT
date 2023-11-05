#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		int sum=0,sum1=0;
		for(int i=0;i<n;i++) {
			cin>>a[i];
			sum+=a[i];
		}
		for(int i=0;i<n-1;i++){
			sum+=a[i];
		}
		int check=0;
		int t=sum-sum1;
		for(int i=1;i<n-1;i++){
			if(sum1-t==a[n-1-i]){
				check=1;
				cout<<n-i<<endl;
				break;
			}
			else {
				sum1-=a[n-1-i];
				t+=a[n-1-i];
			}
		}
		if(check==0) cout<<"-1\n";
	}
}

