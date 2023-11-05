#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int sum1=0,sum2=0;
		for(int i=0;i<n;i++){
			if(i<min(n-k,k)){
				sum1+=a[i];
			}
			else sum2+=a[i];
		}
		cout<<sum2-sum1<<endl;
	}
}

