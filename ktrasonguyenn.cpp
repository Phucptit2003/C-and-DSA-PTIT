#include<bits/stdc++.h>
using namespace std;
int check(long n){
	for(long i=2;i<sqrt(n);i++){
		if(n%i==0) return 0;
	} return 1;
}
int daoso(long n){
	int c=0;
	while(n>0){
		c=c*10+n%10;
		n/=10;
	}
	if(check(c)==1) return 1;
	else return 0;
}
int Tongcacso(long n){
	int sum=0;
	while(n>0){
		int c=n%10;
		sum+=c;
		n/=10;
	}
	if(check(sum)==1) return 1;
	else return 0;
}
int Tungso(long n){
	while(n>0){
		int c=n%10;
		if(check(c)!=1) return 0;
		n/=10;
	} return 1;
}
int main(){
	int dem=0;
	for(long i=0;i<pow(10,10);i++){
		if(check(i)==1)
		if(daoso(i)==1)
		if(Tongcacso(i)==1)
		if(Tungso(i)==1)
		dem++;
	} cout<<dem;
}
