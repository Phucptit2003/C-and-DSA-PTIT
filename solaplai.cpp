#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		long long a,x,y;
		cin>>a>>x>>y;
		long long s=__gcd(x,y);
		for(int i=0;i<s;i++){
			cout<<a;
		}
		cout<<endl;
	}
}