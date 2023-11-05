#include<bits/stdc++.h>

using namespace std;
const int mod=1e9+7;
int tong[105];
int main(){
	vector<long long>v(105,1);
	long long tong[105]={};
	tong[1]=10;
	long long sum;
	for(int i=2;i<=100;i++){
		for(int j=1;j<10;j++){
			sum=0;
			for(int z=j;z<10;z++){
				sum+=v[z];
			}
			tong[i]+=sum;
			while(tong[i]>=mod) tong[i]-=mod;
			v[j]=sum;
		}
	}
	for(int i=2;i<=100;i++){
		tong[i]+=tong[i-1];
		while(tong[i]>=mod) tong[i]-=mod;
	}
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		cout<<tong[n]<<endl;
	}
}

