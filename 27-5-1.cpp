#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int min,j,t=0;
	for(int i=1;i<=n;i++){
		min=a[i];
		j=i-1;
		
		cout<<endl;	
		while(j>=0 && a[j]>min){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=min;
		int ok=1;
		for(int k=0;k<=n-1;k++){
			if(a[k]>a[k+1]){
				ok=0;
				break;
			}
		}
		if(ok==1) break;
		for(int k=0;k<=n-1;k++){
			cout<<a[k]<<" ";
		}
	}
	
}

