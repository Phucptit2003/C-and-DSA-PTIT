#include<bits/stdc++.h>
using namespace std;
void check(long long n){
	string s;
	if(n==0) cout<<n;
	while(n>0){
		long long q=n;
		n=n/2;
		s+=to_string(q-n*2);
	}
	for(int i=s.size()-1;i>=0;i--){
		cout<<s[i];
	}
	
	cout<<endl;
}
int main(){
    int test;
    cin>>test;
    while(test--){
    	long long n;
    	cin>>n;
    	check(n);
	}
}

