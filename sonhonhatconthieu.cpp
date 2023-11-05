#include<iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		long long n;
		cin>>n;
		long long a[1000000];
		for(long long i=0;i<n-1;i++){
			cin>>a[i];
		} long long sum=0;
		for(long long i=0;i<n-1;i++){
			sum+=a[i];
		}
		cout<<(long long)(n*(n+1))/2-sum<<endl;
	}
}
