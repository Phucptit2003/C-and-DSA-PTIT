#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		long long n,k;
		cin>>n>>k;
		long long tich=1;
		for(int i=0;i<n;i++){
			tich=tich*2;
		}
		while(tich>0){
			if(k==(tich-1)/2+1){
				int dem=0;
				while(k>0){
					k/=2;
					dem++;
				}
				cout<<char(dem+64)<<endl;
				break;
			} else if(k<(tich-1)/2+1){
				tich=tich-(tich-1)/2-1;
			} else if(k>(tich-1)/2+1){
				k=k-(tich-1)/2-1;
				tich=tich-(tich-1)/2-1;
			}
		}
	}
}

