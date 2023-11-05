#include<bits/stdc++.h>

using namespace std;
int P=1e9+7;
int Uoc(int a,int b){
	return __gcd(a,b);
}
int main(){
    int test;
    cin>>test;
    while(test--){
    	int n;
    	cin>>n;
    	int a[n];
    	long long uoc;
    	long long tich;
    	for(int i=0;i<n;i++){
    		cin>>a[i];
		}
		uoc=a[0];
		tich=a[0]%P;
		for(int i=1;i<n;i++){
			int t=a[i];
			uoc=Uoc(a[i],uoc);
		    t=t%P;
		    tich*=t;
		}
		long long b=tich;
		for(int j=1;j<uoc;j++){
		   tich*=b;
		}
		cout<<tich<<endl;
	}
}

