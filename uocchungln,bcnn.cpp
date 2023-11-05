#include<iostream>
using namespace std;
int UCLN(int a,int b){
	if(a==0) return b;
	else if(b==0) return a;
	else{
	while(a*b!=0){
		int temp=a%b;
		a=b;
		b=temp;
	}
	return a+b;}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int m,n;
		cin>>m>>n;
		cout<<(long long)m*n/UCLN(m,n)<<" "<<UCLN(m,n)<<"\n";
	}
}
