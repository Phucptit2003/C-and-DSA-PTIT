#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n],max1;
		int check=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>0) check=1;
			if(i==0) max1=a[0];
			else {
				if(max1<a[i]) max1=a[i];
			}
		}
		if(check==0) cout<<max1<<endl;
		else{
			int sum=0,res=a[0];
			for(int i=0;i<n;i++){
				if(sum+a[i]<0){
					sum=0;
					continue;
				}
				sum+=a[i];
				if(res<sum) res=sum;
			}
			cout<<res<<endl;
		}
	}	
}	

