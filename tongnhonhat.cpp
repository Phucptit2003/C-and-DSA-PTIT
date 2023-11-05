#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		long long tong=0,tong1=0;
		for(int i=0;i<n;i++){
			if(i%2==0){
				tong=tong*10+a[i];
			}
			else{
				tong1=tong1*10+a[i];
			}
		}
		cout<<(long long) tong+tong1<<endl;
	}
}

