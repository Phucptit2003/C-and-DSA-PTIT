#include<iostream>
using namespace std;
int main(){
	int testcase;
	cin>>testcase;
	while(testcase--){
		int n;
		cin>>n;
		int i=2;
		while(n>0){
			if(n%i==0){
				if(i==n) {
				cout<<i<<"\n";
				break;}
				n=n/i;
				
			} else i++;
		} 
	}
}
