#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
    	long long b,p;
    	cin>>b>>p;
    	long long res=0;
    	for(long long i=1;i<p;i++){
    		if(i*i%p==1){
    			long long d=i+(b/p)*p;
    			if(d>b){
    				d-=p;
				}
				res+= (d-i)/p-1;
			}
		}
		cout<<res<<endl;
	}
}

