#include<bits/stdc++.h>
using namespace std;
int n,k;  
int a[100];
void check(int m){
		int i;
    		if(m>k){
    			for( i=1;i<=k;i++){
    				cout<<a[i];
				}
				cout<<" ";
				return;
			}
			for(i=a[m-1]+1;i<=n-k+m;i++){
				a[m]=i;
				check(m+1);
			}
		}
void lk(int a[]){
	check(1);
}
int main(){
    int test;
    cin>>test;
    while(test--){	
    	cin>>n>>k;
       lk(a);
       cout<<endl;
	}
}

