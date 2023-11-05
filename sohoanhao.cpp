#include<bits/stdc++.h>
using namespace std;
bool check(long long n){
	if(n<2) return false;
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
    int test;
    cin>>test;
    while(test--){
    	long long n;
    	cin>>n;
    	int check1=0;
    	for(int i=2;i<20;i++){
    		if(check(i)&&check(pow(2,i)-1)){
    			if(pow(2,2*i)-pow(2,i)==2*n){
    				cout<<1<<endl;
    				check1=1;
    				break;
				}
			}
		}
		if(check1==0) cout<<"0\n";
	}
}

