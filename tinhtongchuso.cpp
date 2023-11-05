#include<iostream>
using namespace std;
int n;
void check(){
	int sum=0;
	while(n>0){
		int c=n%10;
		sum+=c;
		n=n/10;
	}
	n=sum;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n;
		while(n>9) check();
		cout<<n<<endl;
	}
}
