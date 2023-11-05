#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;

int main(){
    int test;
    cin>>test;
    while(test--){
    	int n;
    	int x;
    	cin>>n>>x;
    	int a[n];
    	for(int i=0;i<n;i++){
    		cin>>a[i];
		}
		reverse(a,a+n);
		long long sum=0;
		long long mu=1;
		for(int i=0;i<n;i++){
			sum+=a[i]*mu;
			sum=sum%mod;
			mu=mu*x;
			mu=mu%mod;
		}
		cout<<sum<<endl;
	}
}

