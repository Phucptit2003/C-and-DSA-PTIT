#include<bits/stdc++.h>
using namespace std;
#define N 100000
int main(){
	int test;
	cin>>test;
	while(test--){
		int m,n;
		cin>>m>>n;
		int a[N];
		for(int i=0;i<m+n;i++){
			cin>>a[i];
		}
		sort(a,a+(m+n));
		for(int i=0;i<m+n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
