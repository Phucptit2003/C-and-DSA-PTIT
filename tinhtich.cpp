#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int m,n;
		cin>>m>>n;
		int a[100],b[100];
		for(int i=0;i<m;i++){
			cin>>a[i];
		}
		for(int j=0;j<n;j++){
			cin>>b[j];
		}
		sort(a,a+m);
		sort(b,b+n);
		cout<<(long long)a[m-1]*b[0]<<endl;
	}
}
