#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		int sum=0;
		int f[n]={0};
		f[0]=1;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%2==1){
			cout<<"NO\n";
		}
		else{
			int k=sum/2;
			for(int i=0;i<n;i++){
				f[a[i]]=1;
				for(int j=k;j>=a[i];j--){
					if(f[j-a[i]]==1){
						f[j]=1;
					}
				}
			}
			if(f[k]==1) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
}

