#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=1;i<=n;i++){
    	
	if(i==n){
	for(int i=1;i<=2*n-1;i++){
		cout<<"*";
	    }
	    cout<<".";
	    cout<<endl;
	    }
		else if(i<n) {
		for(int j=1;j<=i+1;j++){
    		if(j==1||j==i){
    			cout<<"*";
			} else cout<<".";
		}
		cout<<endl;}
		else cout<<".";
	}
    for(int i=n+1;i<=2*n-1;i++){
    	for(int j=1;j<=2*n-1;j++){
    		if(j==i||j==2*n-1){
    			cout<<"*";
			} else cout<<".";
		}
		cout<<endl;
	}
}

