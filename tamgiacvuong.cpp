#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		long long n;
		cin>>n;
		long long a[n];
		multiset<int>ms;
		for(int i=0;i<n;i++){
			cin>>a[i];
			ms.insert(a[i]);
		} int check1=1;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				long long sum=sqrt(a[i]*a[i]+a[j]*a[j]);
				long long check=a[i]*a[i]+a[j]*a[j];
				if(check==sum*sum){
					if(ms.find(sum)!=ms.end()) check1=0;
				}
			}
		}
		if(check1) cout<<"NO\n";
		else cout<<"YES\n";
	}
}
