#include<bits/stdc++.h>
using namespace std;
#define p 1000000007
int main(){
    string a;
	long long n;
    cin>>a>>n;
    long long tong=0;
    for(int i=0;i<a.size();i++){
    	tong=(tong*10+(a[i]-'0'))%p;
	} long long dem=tong;
	for(int i=0;i<n-1;i++){
		tong*=dem;
	}
	cout<<tong%p<<endl;
}

