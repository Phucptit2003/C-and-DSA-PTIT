#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		long long n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		} int check=0;
		int max=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[j]-a[i]<=0){
					break;
				} else {
					if(a[j]-a[i]>max) max=a[j]-a[i];
				}
			}	
		}
	if(max==0) cout<<"-1\n";
	else cout<<max<<endl;
}
}
