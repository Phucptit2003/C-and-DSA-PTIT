#include<iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int check=0;
		while(n>0){
			int c=n%10;
			if(c!=0&&c!=6&&c!=8){
				check=1;
				break;
			}
			n=n/10;
		} 
		if(check==0)cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
}
