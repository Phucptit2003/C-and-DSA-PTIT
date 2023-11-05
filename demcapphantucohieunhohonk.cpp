#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		long long dem=0;
		for(int i=0;i<n-1;i++){
         int id=upper_bound(a,a+n,a[i]+x-1)-a;
         dem+=1LL*(id-i-1);
		}
		cout<<dem<<endl;
	}
}
