#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		for(long i=2;i<=sqrt(n);i++){
		if(n%i==0){ int demmu=0;
		 while(n%i==0){
			demmu++;
			n=n/i;
			}
			cout<<i<<" "<<demmu<<" ";
		}
		}if(n>1) cout<<n<<" "<<1;
		cout<<endl;
	}
}
