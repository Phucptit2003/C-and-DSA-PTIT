#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		long long n;
		cin>>n;
		long long res;
		for(int i = 2; i <= sqrt(n); i++){
		    if(n % i == 0){
		        while(n % i == 0){
		        	res=i;
		            n /= i;
		        }
		    }
		}
		if(n != 1) res=n;
		cout << res << endl;
	}
}
