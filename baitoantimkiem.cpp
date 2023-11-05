#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,s,k;
		cin>>n>>s>>k;
		int a[n+1];
		long long sum=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=s;i++){
			sum+=a[i];
		}
//		if(k>su) cout<<-1<<endl;
//		else{
			int i=1;
			while(1){
				if(sum<=k){
					cout<<i<<endl;
					break;
				}
				else if(sum>k){
					sum-=a[i];
					i++;
					if(i>s){
						cout<<-1<<endl;
						break;
					}
				}
			}
//		}
	}
}

