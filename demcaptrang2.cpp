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
		long long res=0;
		for(int i=0;i<n;i++){
			res+=lower_bound(a+1+i,a+n,k+a[i])-a-i-1;
		}
		cout<<res<<endl;
	}
}

