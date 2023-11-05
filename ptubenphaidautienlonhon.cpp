#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n],c[n]={0};
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]<a[j]){
					a[i]=a[j];
					c[i]=1;
					break;
				}
			}
	    }
	    for(int i=0;i<n;i++){
	    	if(c[i]==0) cout<<-1<<" ";
	    	else cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}

