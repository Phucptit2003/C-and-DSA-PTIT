#include<bits/stdc++.h>

using namespace std;
const int N=1e6+5;
long long f[N];
int main(){
	int test;
	cin>>test;
	while(test--){
		long long n,k;
		cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		memset(f,0,sizeof(f));
		f[0]=1;
		for(long long i=0;i<n;i++){
			for(long long j=k;j>=a[i];j--){
				if(f[j-a[i]]==0){
					f[j]=1;
				}
			}
		}
		cout<<f[n]<<endl;
	}
}

